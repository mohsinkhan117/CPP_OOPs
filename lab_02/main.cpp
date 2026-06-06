#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    double re, im;

public:
    Complex() : re(0.0), im(0.0) {}
    Complex(double r, double i) : re(r), im(i) {}

    void input()
    {
        cout << "Enter real part: ";
        cin >> re;
        cout << "Enter imaginary part: ";
        cin >> im;
    }
    void show()
    {
        if (im > 0)
            cout << re << " + i" << fabs(im) << endl;
        else
            cout << re << " - i" << fabs(im) << endl;
    }

    void subCom(Complex c1, Complex c2);
    void addCom(Complex c1, Complex c2);
    void mulCom(Complex c1, Complex c2);
    void divCom(Complex c1, Complex c2);
};

void Complex::subCom(Complex c1, Complex c2)
{
    re = c1.re - c2.re;
    im = c1.im - c2.im;
}

void Complex::addCom(Complex c1, Complex c2)
{
    re = c1.re + c2.re;
    im = c1.im + c2.im;
}

void Complex::mulCom(Complex c1, Complex c2)
{
    re = (c1.re * c2.re) - (c1.im * c2.im);
    im = (c1.re * c2.im) + (c1.im * c2.re);
}
void Complex::divCom(Complex c1, Complex c2)
{double denominator = (c2.re * c2.re) + (c2.im * c2.im);
    if (denominator == 0)
    {cout << "Error: Division by zero complex number!" << endl;}
    re = ((c1.re * c2.re) + (c1.im * c2.im)) / denominator;
    im = ((c1.im * c2.re) - (c1.re * c2.im)) / denominator;
}
int main()
{
    Complex c1, c2, c3;
    cout << "Enter first complex number:" << endl;
    c1.input();
    c1.show();
    cout << "\nEnter second complex number:" << endl;
    c2.input();
    c2.show();
    cout << "\n--- Results ---" << endl;
    c3.addCom(c1, c2);
    cout << "Sum: ";
    c3.show();
    c3.subCom(c1, c2);
    cout << "Subtraction: ";
    c3.show();
    c3.mulCom(c1, c2);
    cout << "Multiplication: ";
    c3.show();
    c3.divCom(c1, c2);
    cout << "Division: ";
    c3.show();
    return 0;}
