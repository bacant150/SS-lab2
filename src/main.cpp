#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;

    double a = 10, b = 5;

    std::cout << "Add: " << calc.Add(a, b) << std::endl;
    std::cout << "Sub: " << calc.Sub(a, b) << std::endl;
    std::cout << "Mul: " << calc.Mul(a, b) << std::endl;
    std::cout << "Div: " << calc.Div(a, b) << std::endl;

    return 0;
}