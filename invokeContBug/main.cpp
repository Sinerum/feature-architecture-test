#include <iostream>

bool feature = true;
class Test {
public:
    Test() = default;
    void test(int a) {
        int t = 42;
        a += t;
    }
};

int main() {
    int a = 1;
    Test t{};
    t.test(a);
    if (feature) {
        a =2;
    }
    return 0;
}


