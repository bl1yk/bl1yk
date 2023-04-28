#include "type1_2.h"

int main() {
    Type1Equation t1;
    t1.show();
    t1.get_answer();

    Type2Equation t2(5);
    t2.show();
    t2.get_answer();

    return 0;
}