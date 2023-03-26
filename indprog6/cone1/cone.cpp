#include "cone.h"
void cone::setCoordinate(double a, double b, double c) { x = a; y = b; z = c; }
void cone::setRadius(double r) { radius = r; }
void cone::setHeight(double h) { height = h; }
double cone::getRadius() { return radius; }
double cone::getHeight() { return height; }
double cone::area() {
    double l = sqrt(height * height + radius * radius);
    return pi * radius * (radius + l);
}
double cone::volume() {return pi * radius * radius * height / 3;}
ostream& operator<<(ostream& stream, cone obj) {
    stream << "(" << obj.x << "; ";
    stream << obj.y << "; ";
    stream << obj.z << ") ";
    stream << "r=" << obj.radius << " ";
    stream << "h=" << obj.height << "\n";
    return stream;
};