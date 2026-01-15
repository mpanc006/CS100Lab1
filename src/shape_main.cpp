#include <iostream>
#include <limits>
#include "../header/rectangle.hpp"
#include "../header/triangle.hpp"

using namespace std;

int main() {
    int choice;

    cout << "Choose a shape:\n";
    cout << "1. Rectangle\n";
    cout << "2. Triangle\n";
    cout << "Enter choice (1 or 2): ";
    cin >> choice;

    if (cin.fail() || (choice != 1 && choice != 2)) {
        cout << "Invalid choice." << endl;
        return 1;
    }

    int height;
    cout << "Enter height: ";
    cin >> height;

    if (cin.fail() || height <= 0) {
        cout << "Invalid height." << endl;
        return 1;
    }

    if (choice == 1) {
        int width;
        cout << "Enter width: ";
        cin >> width;

        if (cin.fail() || width <= 0) {
            cout << "Invalid width." << endl;
            return 1;
        }

        Rectangle r;
        r.set_height(height);
        r.set_width(width);

        cout << "Rectangle area: " << r.area() << endl;
    }
    else {
        int base, height;
        cout << "Enter base: ";
        cin >> base;
        cout << "Enter height: ";
        cin >> height;

        if (cin.fail() || base <= 0 || height <= 0) {
            cout << "Invalid dimensions." << endl;
            return 1;
        }

        Triangle t;
        t.set_base(base);
        t.set_height(height);
        cout << "Triangle area: " << t.area() << endl;
    }

    return 0;
}

