// 2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
// number of instance member variables and also define instance member functions to
// set values for time and display values of time.
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
class timing
{
private:
    int hours, min, sec;

public:
    void setdate(int h, int m, int s)
    {
        hours = h;
        min = m;
        sec = s;
    }
    void displaydate()
    {
        cout << " " << hours << " hr  " << min << " min  " << sec << " sec " << endl;
    }
};
int main()
{
    timing t;
    system("cls");
    cout << "Time is : " << endl;
    t.setdate(3, 45, 20);
    t.displaydate();
    getch();
}
