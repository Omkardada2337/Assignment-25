// 9. Define a class Circle and define an instance member function to find the area of the
// circle.
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
class Circle
{
private:
    float r;

public:
    void area(float radius)
    {
        r = radius;
        cout << "Area of the circle with radius " << r << " is " << 3.14 * r * r << " square units" << endl;
    }
};
int main()
{
    Circle c;
    system("cls");
    c.area(15.5);
    getch();
}
