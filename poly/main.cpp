#include <iostream>

using namespace std;



























int main() {
    double r = 5.0;
    double l = 4.0, w = 6.0;
    double b = 3.0, h = 7.0;

    cout << "Area of circle (radius " << r << "): "
         << area(r) << endl;

    cout << "Area of rectangle (" << l << " x " << w << "): "
         << area(l, w) << endl;

    cout << "Area of triangle (base " << b << ", height " << h << "):"
         << area(b, h, true) << endl;

    return 0;
}
