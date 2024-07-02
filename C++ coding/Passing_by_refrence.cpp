//c++ program to show function of passing by value or reference
#include <iostream>
using namespace std;

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int x, y;
    cout << "Enter the value of x:" << "\n";
    cin >> x;
    cout << "Enter the value of y:" << "\n";
    cin >> y;
    cout << "Before swap:" << endl;
    cout << "x=" << x << " " << "y=" << y<<endl;
    swap(x, y);
    cout << "After swap:" << endl;
    cout << "x=" << x << " " << "y=" << y<<endl;
}
