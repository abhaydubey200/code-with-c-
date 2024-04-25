#include <iostream>
using namespace std;

// Base class A
class A {
public:
    void displayA() {
        cout << "This is class A" << endl;
    }
};

                                   // Base class B
class B {
public:
    void displayB() {
        cout << "This is class B" << endl;
    }
};

            	                                // Derived class C, inheriting from A
class C : public A {
public:
    void displayC() {
        cout << "This is class C" << endl;
    }
};

                                                                                    // Derived class D, inheriting from B and C
class D : public B, public C {
public:
    void displayD() {
        cout << "This is class D" << endl;
    }
};

int main() {
    D obj;
    obj.displayA();                                             // Accessing member function of class A through class C
    obj.displayB();                                                         // Accessing member function of class B
    obj.displayC();                                     // Accessing member function of class C
    obj.displayD();                                                     // Accessing member function of class D
    return 0;
}
