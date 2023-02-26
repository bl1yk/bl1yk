#include <iostream>
#include <cmath>
#include "Triangle.h"

using namespace std;

int main()
{
    Triangle mas[3];
    double a, b, c;
    for (int i = 0; i < 3; i++) {
        cout << "Ââåäèòå a, b è c äëÿ òðåóãîëüíèêà ¹ " << i + 1 << " ÷åðåç ïðîáåë: " << endl;
        cin >> a >> b >> c;
        mas[i].set(a, b, c);
        if (!(mas[i].exst_tr())) {
            mas[i].show();
            cout << "Òðåóãîëüíèêà ñ òàêèìè ñòîðîíàìè íå ñóùåñòâóåò, ïîïðîáóéòå åù¸ ðàç" << endl;
            i--;
        }
    }
    for (int i = 0; i < 3; i++) {
        mas[i].show();
        cout << "Ïåðèìåòð òðåóãîëüíèêà: " << mas[i].perimetr() << endl;
        cout << "Ïëîùàäü òðåóãîëüíèêà: " << mas[i].square() << endl;
    }
    return 0;
}
