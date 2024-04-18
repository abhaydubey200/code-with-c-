#include<iostream>
#include<conio.h>
using namespace std;
int i=6; //it is called globle variable ...
//Note:-   When we create a variable in the {.....} then it is called local variable and whe we create a variable outside of {....} then it is called globle variable..
int add(int p ,int q){
    int r=p+q;
    return r;

}

int main(){
    int a,b;  // Local Variable....
    cout<<"Enter two Numbers   ";
    cin>>a>>b;
    int z=add(a,b);
    cout<<"Add two numbers"<<z;
    getch();
}