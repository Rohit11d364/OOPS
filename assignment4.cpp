#include <iostream>
using namespace std;

class Complex
{
    float real, imag;

public:
   
    void input()
    {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    
    void display()
    {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }

    
    Complex add(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    
    Complex subtract(Complex c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }

    
    Complex multiply(Complex c)
    {
        Complex temp;
        temp.real = real * c.real - imag * c.imag;
        temp.imag = real * c.imag + imag * c.real;
        return temp;
    }

    
    Complex divide(Complex c)
    {
        Complex temp;
        float denominator = c.real * c.real +
                            c.imag * c.imag;

        if (denominator == 0)
        {
            cout << "Division by zero is not possible!" << endl;
            temp.real = 0;
            temp.imag = 0;
        }
        else
        {
            temp.real = (real * c.real +
                         imag * c.imag) / denominator;

            temp.imag = (imag * c.real -
                         real * c.imag) / denominator;
        }

        return temp;
    }

   
    Complex conjugate()
    {
        Complex temp;
        temp.real = real;
        temp.imag = -imag;
        return temp;
    }
};

int main()
{
    Complex c1, c2, result;

    cout << "Enter first complex number:" << endl;
    c1.input();

    cout << "Enter second complex number:" << endl;
    c2.input();

    cout << "\nFirst complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    result = c1.add(c2);
    cout << "\nAddition: ";
    result.display();

    result = c1.subtract(c2);
    cout << "Subtraction: ";
    result.display();

    result = c1.multiply(c2);
    cout << "Multiplication: ";
    result.display();

    result = c1.divide(c2);
    cout << "Division: ";
    result.display();

    result = c1.conjugate();
    cout << "Conjugate of first number: ";
    result.display();

    return 0;
}
