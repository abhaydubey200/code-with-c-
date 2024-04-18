#include <iostream>
#include <conio.h>
using namespace std;

// Note:-- 1:- if we create a variable or function in side of class then it is called instance member variable / instance member function...
//  2:- on the placeses of class we can also use struct . class and struct both are same in c++ .
class car
{
public:
    int tyre;
    int staring;
    int brake;
    void fittyre()
    {
        cout << tyre << endl;
        cout << "Fit Tyre successfully. "<<endl;
    }
    void setbrake()
    {
        cout << brake << endl;
        cout << "Set Brake Successfully. "<<endl;
    }
};

int main()
{
    car c1, c2;

    c1.tyre = 1;
    c2.tyre = 2;

    c1.brake = 5;
    c2.brake = 8;

    c1.fittyre();
    c2.fittyre();

    c1.setbrake();
    c2.setbrake();

    getch();
}
