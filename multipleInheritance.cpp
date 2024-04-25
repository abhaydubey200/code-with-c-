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

                                                                                    // Derived class ABCD inheriting from both A and B
class ABCD : public A, public B {
public:
    void displayABCD() {
        cout << "This is class ABCD" << endl;
    }
};

int main() {
    ABCD obj;
    obj.displayA();                                                                         // Accessing member of class A
    obj.displayB();                                                         // Accessing member of class B
    obj.displayABCD();                                                                          // Accessing member of class ABCD
    return 0;
}
