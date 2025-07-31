#include "lasagna_master.h"

namespace lasagna_master {

// TODO: add your solution here
int preparationTime(std::vector<std::string> layers, int avgtime) {
    return layers.size() * avgtime;
}

amount quantities(std::vector<std::string> layers) {
    amount a{0, 0.0};
    for(const auto& layer: layers) {
        if(layer == "noodles") a.noodles += 50;
        else if(layer == "sauce") a.sauce += 0.2;
    }
    return a;
}

void addSecretIngredient(std::vector<std::string>& myIn, const std::vector<std::string>& friendIn) {
    myIn.pop_back();
    myIn.emplace_back(friendIn.back());
}

void addSecretIngredient(std::vector<std::string>& myIn, const std::string& aunt) {
    myIn.pop_back();
    myIn.emplace_back(aunt);
}

std::vector<double> scaleRecipe(const std::vector<double>& recipe, int n) {
    std::vector<double> scaledRecipe;
    for(const auto& a : recipe) {
        scaledRecipe.push_back(a * n / 2);
    }
    return scaledRecipe;
}

}  // namespace lasagna_master
