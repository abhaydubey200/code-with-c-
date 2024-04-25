#include <iostream>
using namespace std;

                                                            // Base class
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

                                                // Derived class C inheriting from A
class C : public A {
public:
    void displayC() {
        cout << "This is class C" << endl;
    }
};

                                                            // Derived class D inheriting from A
class D : public A {
public:
    void displayD() {
        cout << "This is class D" << endl;
    }
};

                                // Derived class ABCD inheriting from B, C, and D
class ABCD : public B, public C, public D {
public:
    void displayABCD() {
        cout << "This is class ABCD" << endl;
    }
    
                                                 // Specify which displayA() function to call
    void displayA() {
        B::displayA();
    }
};

int main() {
    ABCD obj;
    obj.displayA();                              // Accessing displayA() from class A via class B
    obj.displayB();                                 // Accessing displayB() from class B
    obj.displayC();                                         // Accessing displayC() from class C
    obj.displayD();                                                             // Accessing displayD() from class D
    obj.displayABCD();                                          // Accessing displayABCD() from class ABCD
    return 0;
}
