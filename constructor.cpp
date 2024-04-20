#include<iostream>
#include<conio.h>
using namespace std;

class null{
    static int x;
public:
    // Constructor with a different name
    null(){
        x = 2;
        cout << "x: " << x << endl;
    }
};

// Initialization of the static member variable
int null::x = 0;

int main(){
    null d2;
    getch();
    return 0;
}
