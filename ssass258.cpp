// 8. Define a class Rectangle and define an instance member function to find the area of
// the rectangle.
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
class Rectangle
{
private:
    float l, b;

public:
    void area(float len, float bre)
    {
        l = len;
        b = bre;
        cout << "Area of the rectangle is : " << l * b << endl;
    }
};
int main()
{
    Rectangle x;
    system("cls");
    x.area(15.2, 4);
    getch();
}
