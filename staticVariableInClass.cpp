#include <iostream>
#include <conio.h>
using namespace std;

class car
{
public:
    int x;
    int y;
    int z;
   static int a;

    void data()
    {

      
        cout << "This is X. " << x << endl
             << "This is Y. " << y << endl
             << "This is z. " << z << endl
             << "This is a. " << a << endl;
    }

    // void display()
    // {

    //     cout << "This is X. " << x << endl
    //          << "This is Y. " << y << endl
    //          << "This is z. " << z << endl
    //          << "This is a. " << a << endl;
    // }
};
int main()
{
    car e1, e2, e3;
    // e1.data(1, 2, 3, 4);
    // e1.display();

    // e2.data(1, 2, 3, 4);
    // e2.display();

    // e3.data(1, 2, 3, 4);
    // e3.display();

    // e1.data(1, 2, 3, 4);
    // e1.display();

    e1.x = 50;
    e2.y = 60;
    e3.z = 80;
    e1.a = 90;
    e1.data();

    getch();
}