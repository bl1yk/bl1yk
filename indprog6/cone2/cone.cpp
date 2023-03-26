#include "cone.h"
#include <cmath>
ostream& operator<<(ostream& os, const Cone& c) {
    os << "ࠤ���: " << c.radius << ", ����: " << c.height;
    return os;
}
istream& operator>>(istream& is, Cone& c) {
    cout << "������ ࠤ���: ";
    is >> c.radius;
    cout << "������ �����: ";
    is >> c.height;
    return is;
}
istream& operator>>(istream& is, TruncatedCone& tc) {
    cout << "������ ࠤ���: ";
    is >> tc.radius;
    cout << "���孨� ࠤ���: ";
    is >> tc.topRadius;
    cout << "����: ";
    is >> tc.height;
    return is;
}
ostream& operator<<(ostream& os, const TruncatedCone& tc) {
    os << "������ ࠤ���: " << tc.radius << ", ���孨� ࠤ���: " << tc.topRadius << ", ����: " << tc.height;
    return os;
}