#include <iostream>
using namespace std;

int count = 0;
class Destructors
{
public:
    Destructors()
    {
        count++;
        cout <<" "<<"this is constructor" << endl
             << count;
    }
    ~Destructors()
    {
        --count;
        cout <<" "<< "this id Destructors" << endl
             << count;
    }
};

int main()
{
    Destructors d1, d2, d3, d4;
    return 0;
}