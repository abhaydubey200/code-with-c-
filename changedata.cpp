#include <iostream>
#include <conio.h>
using namespace std;

class car
{
    int x;
    int y;

public:
    void data(int p, int q)
    {
        x = p;
        y = q;
    }
    void display()
    {
        cout << "This is X. " << x << endl
             << "This is Y. " << y << endl;
    }
};

int main()
{
    car e1, e2, e3;
    e1.data(2, 3);
    e1.display();
    e2.data(4, 5);
    e2.display();
    e3.data(6, 7);
    e3.display();

    getch();
}