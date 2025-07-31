#include "power_of_troy.h"
#include <memory>

namespace troy {

void give_new_artifact(human& h, const std::string& artifact_name) {
    h.possession = std::make_unique<artifact>(artifact_name);
}

void exchange_artifacts(std::unique_ptr<artifact>& a1, std::unique_ptr<artifact>& a2) {
    std::swap(a1, a2);
}

void manifest_power(human& h, const std::string& name){
    h.own_power = std::make_shared<power>(name);
}

void use_power(human& caster, human& target){
    target.influenced_by = caster.own_power;
}

int power_intensity(human &h) {
    return h.own_power.use_count();
}

}  // namespace troy
