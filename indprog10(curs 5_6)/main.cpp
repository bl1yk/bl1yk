#include <iostream>
#include "type5_6.h"
#include <windows.h>

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double valB, valC;
    double ValA, ValB, ValC;

    std::cout << "������ �����樥��� B � � ��� �ࠢ����� 5-�� ⨯� �१ �஡�� ᮮ⢥��⢥���: ";
    std::cin >> valB >> valC;
    std::cout << "������ �����樥��� A, B � C ��� �ࠢ����� 6-�� ⨯� �१ �஡�� ᮮ⢥�ᢥ���: ";
    std::cin >> ValA >> ValB >> ValC;
    Type5 first(valB, valC);
    Type6 second(ValA, ValB, ValC);

    first.show();
    first.get_answer();

    second.show();
    second.get_answer();
}
