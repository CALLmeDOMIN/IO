#include "funkcje.h"
#include <gtest/gtest.h>

TEST(CalculatorTests, NaturalLogarithm) {
  Calculator calc;
  EXPECT_NEAR(calc.ln(1.0), 0.0, 1e-6);
  EXPECT_NEAR(calc.ln(exp(1.0)), 1.0, 1e-6);
}

TEST(CalculatorTests, Exponential) {
  Calculator calc;
  EXPECT_NEAR(calc.exponential(1.0), exp(1.0), 1e-6);
  EXPECT_NEAR(calc.exponential(0.0), 1.0, 1e-6); // e^0 = 1
}

TEST(CalculatorTests, StandardDeviation) {
  Calculator calc;
  double arr[] = {2.0, 4.0, 4.0, 4.0, 5.0, 5.0, 7.0, 9.0};
  int size = sizeof(arr) / sizeof(arr[0]);
  double known_std_dev = 2.0;
  EXPECT_NEAR(calc.standard_deviation(arr, size), known_std_dev, 1e-6);
}