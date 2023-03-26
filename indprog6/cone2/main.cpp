#include "cone.h"
#include <cmath>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    TruncatedCone tc1(2, 4, 1);
    TruncatedCone tc2(3, 5, 2);
    cout << "Усеченный конус 1: " << tc1 << endl;
    cout << "Площадь поверхности: " << tc1.surfaceArea() << ",Объем: " << tc1.volume() << endl;
    cout << "Усеченный конус 2: " << tc2 << endl;
    cout << "Площадь поверхности: " << tc2.surfaceArea() << ",Объем: " << tc2.volume() << endl;
    return 0;
}