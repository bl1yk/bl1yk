#include "type1_2.h"
#include <iostream>
using namespace std;
void Type1Equation::show() {
    cout << "0 = 0" << endl;
}

void Type1Equation::get_answer() {
    cout << "��襭��� ���� �� �᫮ x" << endl;
}

Type2Equation::Type2Equation(double a1) {
    a = a1;
}

void Type2Equation::show() {
    cout << a << "x^2 = 0" << endl;
}

void Type2Equation::get_answer() {
    cout << "��襭��� ���� x = 0" << endl;
}
