#include <iostream>
#include <conio.h>
using namespace std;

class example
{
    int x = 30;
    int y = 50;

public:
    void car()
    {
        x = 60;
        cout << "hello" << " " << x;
    }
};

int main()
{
    example e1;
    // e1.x=67;               //Note:-- we can not access private data member outside the class...

    e1.car();
    cout << endl;
    int x = 40;

    cout << x;
    getch();
}