#include <iostream>
#include <conio.h>
using namespace std;

class demo
{
    int x;
    int y;

public:
~demo(){                                               // ( ~ ) this symbol is called tild..
    cout<<endl<<"this is distructor"<<endl;
}
    demo(int p, int q)
    {
        x = p;
        y = q;
    }
    demo(demo &g1)
    {
        g1.x++;
        g1.y++;
    }
    void display()
    {

        cout <<endl<< x << " " << y;
    }
};

int main()
{
    demo e1(6, 9);
    demo e2(7, 2);
    demo e3(e1);
    e1.display();
    return 0;
}