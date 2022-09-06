// 6. Define a class Square to find the square of a number and write a C++ program to
// Count number of times a function is called.
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
class square
{
private:
    int n;

public:
    int count = 0;
    void squareof(int num)
    {
        n = num;
        cout << "Square of " << n << " is " << n * n << endl;
        count++;
    }
};
int main()
{
    square t;
    system("cls");
    t.squareof(25);
    cout << "Number of times squareof function is called : " << t.count << endl;
    getch();
}
