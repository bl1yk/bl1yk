#include <iostream>
#include <string>
using namespace std;
class Ocean {
private:
    string name;
    double size;
    double depth;
public:
    Ocean() : name(""), size(0), depth(0) {}
    Ocean(string name, double size, double depth)
            : name(name), size(size), depth(depth){}
    friend ostream& operator<<(ostream& out, const Ocean& ocean);
    friend istream& operator>>(istream& in, Ocean& ocean);
    bool operator==(const Ocean& other) const {
        return name == other.name && size == other.size && depth == other.depth;
    }
};
class Sea : public Ocean {
private:
    string name;
    double size;
    double depth;
public:
    Sea() : Ocean() {}
    Sea(string name, double size, double depth)
            : Ocean(name, size, depth) {}
};
class Bay : public Ocean {
private:
    string name;
    double size;
    double depth;
public:
    Bay() : Ocean() {}
    Bay(string name, double size, double depth)
            : Ocean(name, size, depth) {}
};