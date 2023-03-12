#include <iostream>
#include <cmath>
#include "eq2.h"
using namespace std;
int main(){
    double a, b, c;
    cin >> a >> b >> c;
    eq2 exmpl(a, b, c);
    exmpl.find_X();
    cout << exmpl.find_Y(6);
    return 0;
}