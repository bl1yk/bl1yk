#include "cone.h"
#include <cmath>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    TruncatedCone tc1(2, 4, 1);
    TruncatedCone tc2(3, 5, 2);
    cout << "��祭�� ����� 1: " << tc1 << endl;
    cout << "���頤� �����孮��: " << tc1.surfaceArea() << ",��ꥬ: " << tc1.volume() << endl;
    cout << "��祭�� ����� 2: " << tc2 << endl;
    cout << "���頤� �����孮��: " << tc2.surfaceArea() << ",��ꥬ: " << tc2.volume() << endl;
    return 0;
}