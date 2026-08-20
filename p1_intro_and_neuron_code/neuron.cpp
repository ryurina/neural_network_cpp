#include <iostream>
#include <vector>


int main (int argc, char *argv[]) {
  std::vector<double> inputs{1.2, 5.1, 2.1};
  std::vector<double> weights{3.1, 2.1, 8.7};
  double bias{3.0};

  double output = inputs[0]*weights[0] + inputs[1]*weights[1] + inputs[2]*weights[2] + bias;

  std::cout << output << std::endl;


  return 0;
}
