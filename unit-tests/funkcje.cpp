#include "funkcje.h"
#include <iostream>

int main() {
  Calculator calc;
  double array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int size = sizeof(array) / sizeof(array[0]);

  std::cout << calc.standard_deviation(array, size) << "\n";
  std::cout << calc.ln(-1.0) << "\n";
  std::cout << calc.exponential(10) << "\n";
}