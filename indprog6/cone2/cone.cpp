#include "cone.h"
#include <cmath>
ostream& operator<<(ostream& os, const Cone& c) {
    os << "радиус: " << c.radius << ", высота: " << c.height;
    return os;
}
istream& operator>>(istream& is, Cone& c) {
    cout << "Введите радиус: ";
    is >> c.radius;
    cout << "Введите высоту: ";
    is >> c.height;
    return is;
}
istream& operator>>(istream& is, TruncatedCone& tc) {
    cout << "Нижний радиус: ";
    is >> tc.radius;
    cout << "Верхний радиус: ";
    is >> tc.topRadius;
    cout << "Высота: ";
    is >> tc.height;
    return is;
}
ostream& operator<<(ostream& os, const TruncatedCone& tc) {
    os << "Нижний радиус: " << tc.radius << ", Верхний радиус: " << tc.topRadius << ", Высота: " << tc.height;
    return os;
}