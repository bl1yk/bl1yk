#include <iostream>
class rational {
private:
    int a, b;
    int nod(int a1, int b1) {
        int nod = 1;
        for (int i = 1; i <= a && i <= b; i++) {
            if (a1 % i == 0 && b1 % i == 0) {
                nod = i;
            }
        }
        return nod;
    };
    int gcd(int a1, int b1)
    {
        a = abs(a1), b = abs(b1);
        if (b == 0) { return a; }
        else { return gcd(b, a % b); }
    };
public:
    rational() { a = 0; b = 0; };
    rational(int a1, int b1);
    void set(int a1, int b1);
    void show();
};