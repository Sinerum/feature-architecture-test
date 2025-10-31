#include <iostream>

bool feature = true;

void test() {
    int t = 42;
    int a = 42;
    a += t;
}

int main() {
    if (feature) {
        int  a =2;
    }
    test();
    return 0;
}


