// 3. Define a class Factorial and define an instance member function to find the Factorial
// of a number using class.
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
class Factorial
{
private:
    int f;

public:
    void getf()
    {
        cout << "Enter the any no. of which you want factorial : " << endl;
        cin >> f;
    }
    int showval()
    {
        return f;
    }
    int fact();
};
int Factorial ::fact()
{
    if (f == 0)
        return 1;
    int t = 1;
    for (int i = f; i >= 1; i--)
        t = t * i;
    return t;
}
int main()
{
    int x;
    Factorial a;
    system("cls");
    a.getf();
    x = a.fact();
    cout << "Factorial of " << a.showval() << " is : " << a.fact() << endl;
    getch();
}
