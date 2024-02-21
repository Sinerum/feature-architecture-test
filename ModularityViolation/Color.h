//
// Created by simon on 07.02.24.
//

#ifndef TESTFEATUREINDUCEDARCHITECTURE_COLOR_H
#define TESTFEATUREINDUCEDARCHITECTURE_COLOR_H


class Color {
public:
    Color(int r,int g, int b): r(r), g(g), b(b) {}
    //copy constructor
    Color(const Color &color) {
        r = color.r;
        g = color.g;
        b = color.b;
    }
    static Color black() {return {0,0,0};}

    bool operator==(const Color &rhs) const {
        return r == rhs.r &&
               g == rhs.g &&
               b == rhs.b;
    }

    [[nodiscard]] int getR() const { return r; }
    [[nodiscard]] int getG() const { return g; }
    [[nodiscard]] int getB() const { return b; }
private:
    int r,g,b;
};


#endif //TESTFEATUREINDUCEDARCHITECTURE_COLOR_H
