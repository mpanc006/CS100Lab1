#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle {
public:
    void set_width(int w);
    void set_height(int h);
    int area();
private:
    int width;
    int height;
};

#endif


