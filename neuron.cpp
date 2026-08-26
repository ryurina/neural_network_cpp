#include "utils/zip.h"
#include <iostream>
#include <vector>


int main (int argc, char *argv[]) {
  std::vector<double> inputs{1.0, 2.0, 3.0, 2.5};

  std::vector<std::vector<double>> weights {
    {0.2, 0.8, -0.5, 1.0},
    {0.5, -0.91, 0.26, -0.5},
    {-0.26, -0.27, 0.17, 0.87}
  };

  std::vector<double> bias {2.0, 3.0, 0.5};

  auto result = zip(weights[0], bias);

  for (const auto& [i, j] : result){
    std::cout << i << ": " << j << std::endl;
  }

  return 0;
}
