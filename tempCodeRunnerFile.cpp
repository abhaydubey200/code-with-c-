#include<iostream>
#include<conio.h>
using namespace std;
 
 class car{
int x;
int y;
public:
void display(int p, int q){
    x=p;
    y=q;
    cout<<x<<endl<<y;
}

 };

int main(){
car e1;
e1.display(2,3);


    getch();
}