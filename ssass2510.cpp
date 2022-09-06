// 10. Define a class Area and define instance member functions to find the area of the
// different shapes like square, rectangle , circle etc
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
class Area
{
private:
    float side;
    float len, bre, rad;

public:
    void areaofsquare(float s)
    {
        side = s;
        cout << "Area of square of side " << side << " is " << side * side << endl;
    }
    void areaofrectangle(float l, float b)
    {
        len = l;
        bre = b;
        cout << "Area of rectangle is " << len * bre << endl;
    }
    void areaofcircle(int r)
    {
        rad = r;
        cout << "Area of circle is of radius " << rad << " is " << 3.14 * rad * rad << endl;
    }
};

int main()
{
    Area a;
    system("cls");
    a.areaofsquare(5);
    a.areaofrectangle(15, 20);
    a.areaofcircle(2.5);
    getch();
}
