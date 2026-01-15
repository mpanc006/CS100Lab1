#include "../header/triangle.hpp"

void Triangle::set_base(int b) {
    base = b;
}

void Triangle::set_height(int h) {
    height = h;
}

int Triangle::area() {
    return (base * height) / 2;
}
