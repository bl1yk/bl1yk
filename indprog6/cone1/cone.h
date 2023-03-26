#include <iostream>
#include <cmath>
using namespace std;
class cone {
    double x, y, z;
    double radius;
    double height;
    const double pi = 3.14159265;
public:
    cone() { x = y = z = radius = height = 0; }
    cone(double r, double h) {
        x = y = z = 0;
        radius = r;
        height = h;
    }
    cone(double a, double b, double c, double r, double h) {
        x = a;
        y = b;
        z = c;
        radius = r;
        height = h;
    }
    void setCoordinate(double a, double b, double c);
    void setRadius(double r);
    void setHeight(double h);
    double getRadius();
    double getHeight();
    double area();
    double volume();
    friend ostream& operator<<(ostream& stream, cone obj);
};