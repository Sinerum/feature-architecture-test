#include <iostream>
#include <vector>
bool feature = true;

class Test {
public:
    Test() = default;
    void test(int a) {
        int t = 42;
        a += t;
        int c = exception[0];
    }
    std::vector<int> exception{};
};

int main() {
    int a = 1;
    Test t{};
    if (feature) {
        a =2;
    }
    t.test(a);
    return 0;
}


