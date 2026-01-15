#include "../header/triangle.hpp"

void Triangle::set_base(double b) {
    base = b;
}

void Triangle::set_height(double h) {
    height = h;
}

double Triangle::area() const {
    return 0.5 * base * height;
}
