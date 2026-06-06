/*
#include<iostream>
using namespace std;
class Polygon{
protected:
    float height, length;
public:
    void input(float h, float l){
    height=h;
    length=l;}
};
class Rectangle: public Polygon{
public:
    float area(){
    return height*length;}
};
class Triangle: public Polygon{
public:
    float area(){
    return (height*length)/2;}
};
int main(){
    Rectangle r1;
    Triangle t1;
    r1.input(2.3,5);
    t1.input(2.3,5);
    cout<<"Area of Rectangle is "<<    r1.area()<<endl;
    cout<<"Area of Rectangle is "<<    t1.area()<<endl;
}
*/
