#include <iostream>
using namespace std;

class Complex
{
private:
    double real;
    double imaginary;

public:
    Complex(double r = 0, double i = 0) : real(r), imaginary(i) {}

    Complex add(const Complex &other) const
    {
        Complex result;
        result.real = real + other.real;
        result.imaginary = imaginary + other.imaginary;
        return result;
    }

    void display() const
    {
        cout << real << " + " << imaginary << "i" << endl;
    }

    void setReal(double r)
    {
        real = r;
    }

    void setImaginary(double i)
    {
        imaginary = i;
    }

    double getReal() const
    {
        return real;
    }

    double getImaginary() const
    {
        return imaginary;
    }
};

int main()
{
    Complex num1(12, 32);
    Complex num2(56, 78);

    Complex sum = num1.add(num2);

    cout << "Sum: ";
    sum.display();

    return 0;
}
