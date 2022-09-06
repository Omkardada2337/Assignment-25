// 1. Define a class Complex to represent a complex number. Declare instance member
// variables to store real and imaginary part of a complex number, also define instance
// member functions to set values of complex number and print values of complex
// number
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
class complex
{
private:
    int real, imag;

public:
    void setval(int a, int b)
    {
        real = a;
        imag = b;
    }
    void display()
    {
        cout << "Complex number is : " << real << " + " << imag << "i" << endl;
    }
};
int main()
{
    complex c;
    system("cls");
    c.setval(55, 45);
    c.display();
    getch();
}
