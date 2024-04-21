
#include <iostream>
using namespace std;

class Box
{

public:
    int *data;
    Box(int value)
    {
        data = new int;
        *data = value;
    }

    Box(Box &&other) noexcept
    {
        cout << "Move Constructor Called" << endl;

        data = other.data;
        other.data = nullptr;
    }
};

int main()
{
    Box originalBox(42);

    Box newBox(move(originalBox));

    cout << "newBox.data: " << *newBox.data;

    return 0;
}
