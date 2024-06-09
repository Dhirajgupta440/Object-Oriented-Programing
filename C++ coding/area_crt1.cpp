#include <iostream>
using namespace std;
class Area
{
    int radius;
    float length;
    float width;
    int base;
    int height;

public:
    void getArea(int b, int h);
    void getArea(float l, float w);
    void getArea(int);
};
void Area::getArea(int b, int h)
{
    base = b;
    height = h;
    cout << "area of triangle is:" << (0.5 * base * width) << endl;
}
void Area::getArea(float l, float w)
{
    length = l;
    width = w;
    cout << "Area of rectangle is:" << (l * w) << endl;
}
void Area::getArea(int r)
{
    radius = r;
    cout << "Area of circle is:" << (3.14 * r * r) << endl;
}

int main()
{
    Area a, b, c;
    a.getArea(10, 20);
    b.getArea(10, 20);
    c.getArea(7);
    return 0;
}