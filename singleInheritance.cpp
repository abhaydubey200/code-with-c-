#include<iostream>
using namespace std;

                                              // Base class
class A {
public:
    void displayA() {
        cout << "This is class A" << endl;
    }
};

                                           // Derived class inheriting from class A
class B : public A {
public:
    void displayB() {
        cout << "This is class B" << endl;
    }
};

int main() {
                                                     // Creating an object of class B
    B obj;

                                             // Calling functions from both base and derived classes
    obj.displayA();
    obj.displayB();

    return 0;
}
