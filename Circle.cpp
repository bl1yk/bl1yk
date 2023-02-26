#include <iostream>
#include "Circle.h"

using namespace std;

int main()
{
    circle A(0, 0, 0);
    circle B(0, 0, 0);
    circle C(0, 0, 0);

    float j1, j2, j3;

    cout << "x, y and r circle A\n";
    cin >> j1 >> j2 >> j3;
    A.set_circle(j1, j2, j3);

    cout << "x, y and r circle B\n";
    cin >> j1 >> j2 >> j3;
    B.set_circle(j1, j2, j3);

    cout << "x, y and r circle C\n";
    cin >> j1 >> j2 >> j3;
    C.set_circle(j1, j2, j3);

    cout << "\n";

    cout << "Square A - " << A.square() << "\n";
    cout << "Square B - " << B.square() << "\n";
    cout << "Square C - " << C.square() << "\n";

    float R, X, Y;

    A.get_circle(R, X, Y);
    if (B.check_circle(R, X, Y)) cout << "Circle A and B intersect\n";
    else cout << "Circle A and B not intersect\n";

    B.get_circle(R, X, Y);
    if (C.check_circle(R, X, Y)) cout << "Circle B and C intersect\n";
    else cout << "Circle B and C not intersect\n";

    C.get_circle(R, X, Y);
    if (A.check_circle(R, X, Y)) cout << "Circle A and C intersect\n";
    else cout << "Circle A and C not intersect\n";

    float a, b, c;

    cout << "Enter triangle (a,b,c)\n";
    cin >> a >> b >> c;

    if (A.triangle_around(a, b, c)) cout << "Circle A can be inscribed with a triangle\n";
    else cout << "Circle A circle cant be inscribed with a triangle\n";

    if (B.triangle_around(a, b, c)) cout << "Circle B can be inscribed with a triangle\n";
    else cout << "Circle B circle cant be inscribed with a triangle\n";

    if (C.triangle_around(a, b, c)) cout << "Circle C can be inscribed with a triangle\n";
    else cout << "Circle C circle cant be inscribed with a triangle\n";

    if (A.triangle_in(a, b, c)) cout << "in Circle A can be inscribed triangle\n";
    else cout << "In Circle A cant be inscribed triangle\n";

    if (B.triangle_in(a, b, c)) cout << "‚ Circle B can be inscribed triangle\n";
    else cout << "In Circle B cant be inscribed triangle\n";

    if (C.triangle_in(a, b, c)) cout << "‚ Circle C can be inscribed triangle\n";
    else cout << "In Circle C cant be inscribed triangle\n";

    return 0;
}