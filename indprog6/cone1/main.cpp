#include <iostream>
#include "cone.h"
int main(){
    setlocale(LC_ALL, "Russian");
    cone c1(3, 7);
    cone c2(1, 2, 3, 5, 10);
    cout << "����� 1: " << c1;
    cout << "���頤� �����孮��: " << c1.area() << "\n";
    cout << "��ꥬ: " << c1.volume() << "\n";
    cout << "����� 2: " << c2;
    cout << "���頤� �����孮��: " << c2.area() << "\n";
    cout << "��ꥬ: " << c2.volume() << "\n";
    return 0;
}