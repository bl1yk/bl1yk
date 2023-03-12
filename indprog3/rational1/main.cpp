#include "rational.h"
#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int a, b, n;
    cin >> n;
    rational* mas = new rational[n];
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        (mas[i]).set(a, b);
    }
    cout << "\n";
    for (int i = 0; i < n; i++) {
        (mas[i]).show();
    }
    delete[] mas;
    return 0;
}