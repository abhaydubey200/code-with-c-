#include <iostream>

class Demo {
    int *ptr;

public:
    Demo(int value) {
        ptr = new int(value);
    }

    ~Demo() {
        delete ptr;
    }

    void display() {
        std::cout << "Value stored in dynamic memory: " << *ptr << std::endl;
    }
};

int main() {
    Demo obj(42);
    obj.display();
    // Destructor is automatically called when obj goes out of scope,
    // releasing the memory allocated by 'new'.
    return 0;
}
