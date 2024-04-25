#include<iostream>
#include<conio.h>

using namespace std;

class A {

    string mic = "this is mic";
    string key = "this is key";
public:
    void displayMic() {
        cout << mic << endl;
    }
    void displayKey() {
        cout << key << endl;
    }
};

class B: public A{

    string bett = "this is bett";
    string screen = "this is screen";
public:
    void displaybett() {
        cout << bett << endl;
    }
    void displayscreen() {
        cout << screen << endl;
    }
};

int main() {
   

     B p2;
     p2.displayKey();
     p2.displaybett();
    p2.displaybett();
    p2.displayscreen();
    return 0;
}


