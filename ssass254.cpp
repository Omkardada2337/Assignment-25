// 4. Define a class LargestNumber and define an instance member function to find the
// Largest of three Numbers using the class.
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
class LargestNumber
{
private:
    int a, b, c;

public:
    void findlarge(int, int, int);
};

void LargestNumber::findlarge(int x, int y, int z)
{
    a = x;
    b = y;
    c = z;
    if (a > b)
    {
        if (a > c)
            cout << a << " is the largest number " << endl;
        else
            cout << c << " is the largest number " << endl;
    }
    else
    {
        if (b > c)
            cout << b << " is the largest number " << endl;
        else
            cout << c << " is the largest number" << endl;
    }
}
int main()
{
    LargestNumber n;
    system("cls");
    n.findlarge(5, 8, 7);
    getch();
}
