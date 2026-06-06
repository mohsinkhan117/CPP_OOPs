/*
#include <iostream>

using namespace std;
class A
{
protected:
    int x;
private:

public:
      int y;
    int z;
    A():x(10),y(10),z(10) {}
    A(int a, int y, int z):x(x),y(y),z(z) {}
    void show()
    {
        cout<<"X= "<<x<<"\tY= "<<y<<"\tZ= "<<z<<endl;
    }
    void setX(int a )
    {
        x=a;
    }
    void getX()
    {
        cout<<x;
    }
};
class B:public A
{
public:
    void input(int a, int b, int c)
    {
        setX(a);
        y=b;
        z=c;
    }

};
int main()
{
    B objB;
    objB.show();

    objB.input(3,4,5);
    objB.show();
    return 0;
}
*/
