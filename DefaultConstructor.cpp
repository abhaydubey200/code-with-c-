#include <iostream>
#include <conio.h>
using namespace std;
class DefaultConstructor
{
public:
    int x, y;
    DefaultConstructor()
    {
        x = 40;
        y = 90;

        cout << "hello this is called Default Constructor" << endl
             << x << endl
             << y << endl;
    }
};
int main()
{
    DefaultConstructor d1, d2;
    

    getch();
}