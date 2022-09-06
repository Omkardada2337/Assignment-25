// 5. Define a class ReverseNumber and define an instance member function to find
// Reverse of a Number using class.
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
class ReverseNumber
{
private:
    int num;

public:
    void reverse(int x)
    {
        int n = 0, t = 0;
        num = x;
        while (num != 0)
        {
            t = num % 10;
            n = n * 10 + t;
            num /= 10;
        }
        cout << "Reverse of " << x << " is " << n << endl;
    }
};
int main()
{
    ReverseNumber number;
    system("cls");
    number.reverse(3578);
    getch();
}
