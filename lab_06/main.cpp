#include <iostream>
using namespace std;

class Complex
{
private:
    float re, im;

public:
    Complex ():re(0.0),im(0.0) {}
    Complex(float r, float i )
    {
        re = r;
        im = i;
    }


    Complex(Complex &obj)
    {
        re=obj.re;
        im=obj.im;
        cout<<"inside copy constructor "<<re<<" + i"<< im<<endl;
    }

    void show()
    {
        cout << "re = " << re << " im = " << im << endl;
    }
};

//int main()
//{
//    Complex c1(2.5, 3.5);
//    c1.show();
//
//    Complex c2 = c1;
//    c2.show();
//
//    Complex c3(c2);
//    c3.show();
//
//    return 0;
//}
