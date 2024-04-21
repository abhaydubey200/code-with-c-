#include<iostream>
#include<conio.h>
using namespace std;

class demo{
private:
    static int a; // Make 'a' static
public:
    static void setdata(int x){
        a = x;
    }
    static void getdata(){
        cout << "a: " << a << endl;
    }
};

// Initialize static member variable
int demo::a = 0;

int main(){
    demo::setdata(10); // Call static member function using scope resolution operator
    demo::getdata();

    getch();
    return 0;
}
