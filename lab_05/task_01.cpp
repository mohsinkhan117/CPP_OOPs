//#include<iostream>
//using namespace std;
//class Shape{
//    protected:
//double hight ;
//double length;
//public:
//    void set_values(double hight, double length){
//    this->hight=hight;
//    this->length=length;}
//};
//class Rectangle:public Shape {
//    public:
//    double area(){
//  return  hight*length;
//    }
//};
//int main(){
//    Rectangle r1;
//    r1.set_values(4,3);
//   cout<<"Area of "<<(typeid(r1).name()+1)<<" is "<<r1.area();
//}
#include<iostream>
using namespace std;
class Employee
{
protected:
    int employeeId;
    string name;
public:
    Employee(int empId,string name)
    :employeeId(empId),name(name) {}
    void displayDetails()
    {
        cout<<"Name: "<<name<<"\t"<<"ID: "<<employeeId<<endl;
    }
};
class Manager:public Employee
{
    string department;
public:
    Manager(string name, string department, int employeeId)
    : Employee(employeeId,name),department(department) {}
    void setDepartment (string departmentName)
    {
        department=departmentName;
    }
    string getDepartment ()
    {
        cout<<"Returning department name from getter \\\
        in manager class"<<endl;
        return department;
    }
    void manageTeam()
    {
        cout <<"managing team in the "<<
             department<<" department"<<endl;
    }
    void assignTask()
    {
        cout <<"Assigning tasks to the team in the "<<
             department<<" department"<<endl;
    }
};
class Intern:public Employee
{
    string supervisor;
    int duration;
    public:
    Intern(int empId, string name, string supervisor, int duration)
        : Employee(empId, name), supervisor(supervisor),
         duration(duration) {}
         void trackProgress()
    {
        cout<<"Tracking progress of the intern under "<<supervisor<<" for "
        <<duration<<" months"<<endl;
    }
    void reportActivities()
    {
        cout<<"Reporting activities to "<<supervisor<<" regularly"<<endl;
    }
};
int main()
{
    Manager m1("Khalil Omer","Marketing",12115);
    m1.displayDetails();
    m1.manageTeam();
    m1.assignTask();
    m1.getDepartment();
    Intern i1(15123, "Jamila Shoaib", "Daud Khan", 6);

    i1.trackProgress();
    i1.reportActivities();
}
