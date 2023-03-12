#include <iostream>
using namespace std;
class rational{
private:
    int a, b;
public:
    void set(int a1, int b1);
    void get(int& a1, int& b1) { a1 = a; b1 = b; }
    void show();
    int nod(int a1, int b1) {
        if (a1 == b1) return a1;
        else {
            if (a1 > b1) return nod(a1 - b1, b1);
            else return nod(a1, b1 - a1);
        }
    }
    int nok(int a1, int b1) { return a1 * b1 * nod(a1, b1); }
    rational() { a = 0; b = 0; }
    rational(int a1, int b1){
        if (b1 == 0) { a = 0; b = 0; }
        else if (a1 % b1 == 0) { a = a1 / b1; b = 1; }
        else{
            a1 = a1 % b1;
            double d = nod(a1, b1);
            a = a1 / d;
            b = b1 / d;
        }
    }
    friend rational operator - (rational d1, rational d2);
    rational& operator++();
};
rational operator + (rational d1, rational d2);
bool operator == (rational d1, rational d2);
bool operator > (rational d1, rational d2);