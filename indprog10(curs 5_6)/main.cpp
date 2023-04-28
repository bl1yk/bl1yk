#include <iostream>
#include "type5_6.h"
#include <windows.h>

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double valB, valC;
    double ValA, ValB, ValC;

    std::cout << "Введите коэффициенты B и С для уравнения 5-го типа через пробел соответственно: ";
    std::cin >> valB >> valC;
    std::cout << "Введите коэффициенты A, B и C для уравнения 6-го типа через пробел соответсвенно: ";
    std::cin >> ValA >> ValB >> ValC;
    Type5 first(valB, valC);
    Type6 second(ValA, ValB, ValC);

    first.show();
    first.get_answer();

    second.show();
    second.get_answer();
}
