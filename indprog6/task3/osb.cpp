#include "osb.h"
ostream& operator<<(ostream& out, const Ocean& ocean) {
    out << "Name: " << ocean.name << endl;
    out << "Size: " << ocean.size << endl;
    out << "Depth: " << ocean.depth << endl;
    return out;
}
istream& operator>>(istream& in, Ocean& ocean) {
    cout << "Enter name: " << endl;
    in >> ocean.name;
    cout << "Enter size: " << endl;
    in >> ocean.size;
    cout << "Enter depth: " << endl;
    in >> ocean.depth;
    return in;
}