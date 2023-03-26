#include <iostream>
#include "cone.h"
int main(){
    setlocale(LC_ALL, "Russian");
    cone c1(3, 7);
    cone c2(1, 2, 3, 5, 10);
    cout << "Конус 1: " << c1;
    cout << "Площадь поверхности: " << c1.area() << "\n";
    cout << "Объем: " << c1.volume() << "\n";
    cout << "Конус 2: " << c2;
    cout << "Площадь поверхности: " << c2.area() << "\n";
    cout << "Объем: " << c2.volume() << "\n";
    return 0;
}