#include <iostream>

bool feature = true;

void test() {
    int t = 42;
    int a = 42;
    a += t;
}

int main() {
    test();
    if (feature) {
        int  a =2;
    }
    return 0;
}


