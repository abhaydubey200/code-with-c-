#include <iostream>
#include <conio.h>
using namespace std;

class setdata
{
public:
    int x, y, z;
    static string w;

    void display()
    {
        cout << "x: " << x << endl
             << ", y: " << y << endl
             << ", z: " << z << endl
             << ", w: " << w << endl;
    }
};

// Static member initialization
string setdata::w;

int main()
{
    setdata obj1, obj2, obj3;
    obj1.x = 1;
    obj1.y = 2;
    obj1.z = 3;
    obj1.w = "hello";

    // obj1.display();

    obj2.x = 4;
    obj2.y = 5;
    obj2.z = 6;
    obj2.w = "hey";

    // obj2.display();

    obj3.x = 7;
    obj3.y = 8;
    obj3.z = 9;
    obj3.w = "Go";

    obj3.display();

    return 0;
}
