#include <iostream>
#include <cmath>
using namespace std;
class Cone {
protected:
    double radius;
    double height;
    const double pi = 3.14;
public:
    Cone() : radius(0), height(0) {}
    Cone(double r, double h) : radius(r), height(h) {}
    virtual double surfaceArea() const {
        return pi * radius * (radius + sqrt(radius * radius + height * height));
    }
    virtual double volume() const {
        return pi * radius * radius * height / 3;
    }
    friend ostream& operator<<(ostream& os, const Cone& c);
    friend istream& operator>>(istream& is, Cone& c) ;
};
class TruncatedCone : public Cone {
private:
    double topRadius;
public:
    TruncatedCone() : topRadius(0) {}
    TruncatedCone(double r, double h, double tr) : Cone(r, h), topRadius(tr) {}
    double surfaceArea() const override {
        double l = sqrt(pow(radius - topRadius, 2) + height * height);
        return pi * (radius + topRadius) * l + Cone::surfaceArea();
    }
    double volume() const override {
        double r1 = radius;
        double r2 = topRadius;
        double h = height;
        return pi * h / 3 * (r1 * r1 + r2 * r2 + r1 * r2);
    }
    friend ostream& operator<<(ostream& os, const TruncatedCone& tc);
    friend istream& operator>>(istream& is, TruncatedCone& tc);
    bool operator==(const TruncatedCone& other) const { //сравнение конусов
        return radius == other.radius && height == other.height && topRadius == other.topRadius;
    }
    bool operator!=(const TruncatedCone& other) const {
        return !(*this == other);
    }
};