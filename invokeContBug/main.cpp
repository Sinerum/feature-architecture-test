#include <iostream>

bool feature = true;

void test(int a) {
    int t = 42;
    a += t;
}

int main() {
    int a = 42;
    test(a);
    if (feature) {
        a =2;
    }
    return 0;
}


