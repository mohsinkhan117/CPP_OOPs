//#include <iostream>
//
//using namespace std;
//class Test
//{
//private:
//    int data;
//public:
//    Test():data(10) {}
//    Test(int x):data(x) {}
//    void show ()
//    {
//        cout<<data<<endl;
//    }
//    friend void setData(Test &obj);
//};
//
//void setData(Test &obj)
//{
//    obj.data=0;
//}
//int main()
//{
//Test obj;
//cout<<"data before friend function: ";
//obj.show();
//cout <<endl;
//cout <<"Data after friend function: ";
//setData(obj);// we are not calling the function by object
//obj.show();
//cout <<endl;
//    return 0;
//}
