#pragma once
#include <string>
#include <vector>
namespace lasagna_master {

struct amount {
  int noodles;
  double sauce;
};

int preparationTime(std::vector<std::string> layers, int avgtime = 2);
amount quantities(std::vector<std::string> layers);
void addSecretIngredient(std::vector<std::string>& myIn, const std::vector<std::string>& friendIn);
void addSecretIngredient(std::vector<std::string>& myIn, const std::string& aunt);
std::vector<double> scaleRecipe(const std::vector<double>& recipe, int n);

} // namespace lasagna_master
