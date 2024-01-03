#include <math.h>

class Calculator {
public:
  Calculator();
  ~Calculator();

  double ln(double x);
  double standard_deviation(double *array, int size);
  double exponential(double x);
};

Calculator::Calculator() {}

Calculator::~Calculator() {}

double Calculator::ln(double x) { return log(x); }

double Calculator::standard_deviation(double *array, int size) {
  double sum = 0;
  double mean = 0;
  double standard_deviation = 0;

  for (int i = 0; i < size; i++) {
    sum += array[i];
  }

  mean = sum / size;

  for (int i = 0; i < size; i++) {
    standard_deviation += pow(array[i] - mean, 2);
  }

  return sqrt(standard_deviation / size);
}

double Calculator::exponential(double x) { return exp(x); }