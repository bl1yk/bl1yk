#include "rational.h"
using namespace std;
rational::rational(int a1, int b1) {
    int a = abs(a1);
    int b = abs(b1);
    if (b1 == 0) { a = 0; b = 0; }
    else
    {
        if (a1 % b1 == 0) { a = a1 / b1; b = 1; }
        else { a1 = a1 % b1; a = a1 / gcd(a1, b1); b = b1 / gcd(a1, b1); }
    }
}
void rational::set(int a1, int b1) {
    int x = gcd(a1, b1);
    if (b1 == 0) { a = 0; b = 0; }
    else if (a1 % b1 == 0) { a = a1 / b1; b = 1; }
    else { a1 = a1 % b1; a = a1 / x; b = b1 / x; }
}
void rational::show() {
    cout << a << "/" << b;
}