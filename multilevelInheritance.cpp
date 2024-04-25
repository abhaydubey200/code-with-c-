#include <iostream>
using namespace std;

                                                                                // Base class A
class A {
public:
    void displayA() {
        cout << "This is class A" << endl;
    }
};

                                                                                // Derived class B inheriting from A
class B : public A {
public:
    void displayB() {
        cout << "This is class B" << endl;
    }
};

                                                                            // Derived class C inheriting from B
class C : public B {
public:
    void displayC() {
        cout << "This is class C" << endl;
    }
};

                                                                                            // Derived class D inheriting from C
class D : public C {
public:
    void displayD() {
        cout << "This is class D" << endl;
    }
};

int main() {
    D obj;
    obj.displayA();                                             // Accessing function of class A through class D object
    obj.displayB();                                                         // Accessing function of class B through class D object
    obj.displayC();                                                                 // Accessing function of class C through class D object
    obj.displayD();                                                                          // Accessing function of class D
    return 0;
}
