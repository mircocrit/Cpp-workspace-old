#include <iostream>

#include "class_a.h"

using namespace std;

int main(){
    class_a c1{};
    class_a c1_1;

    class_a c2{ "ww" };
    class_a c2_1("xx");

    // order of parameters is the same as the constructor
    class_a c3{ "yy", 4.4 };
    class_a c3_1("zz", 5.5);
    system("pause");
    return 0;
}
