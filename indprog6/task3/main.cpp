#include "ocsea.h"
#include <iostream>
#include <ctime>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    Ocean ocean1("Pacific Ocean", 168723000, 10968);
    cout << ocean1 << endl;
    Ocean ocean2;
    cin >> ocean2;
    cout << ocean2 << endl;
    Sea sea1("Mediterranean Sea", 2500000, 1500);
    cout << sea1 << endl;
    Sea sea2;
    cin >> sea2;
    cout << sea2 << endl;
    Bay bay1("San Francisco Bay", 400, 1100);
    cout << bay1 << endl;
    Bay bay2;
    cin >> bay2;
    cout << bay2 << endl;
    return 0;
}