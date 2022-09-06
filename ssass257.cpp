// 7. Define a class Greatest and define instance member function to find Largest among
// 3 numbers using classes.
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
class Greatest
{
private:
    int a, b, c;

public:
    void findlarge(int, int, int);
};

void Greatest::findlarge(int x, int y, int z)
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
    Greatest n;
    system("cls");
    n.findlarge(5, 8, 7);
    getch();
}
