#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
    char *name, *dept;
    double salary, exp;

public:
    Employee(const char n[] = "Ali", const char d[] = "IT", double s = 50000, double e = 2);
    Employee(const Employee &e);
    Employee &operator=(const Employee &e);
    void input(), show() const;
    ~Employee();
};

Employee::Employee(const char n[], const char d[], double s, double e)
{
    name = new char[strlen(n) + 1];
    strcpy(name, n);
    dept = new char[strlen(d) + 1];
    strcpy(dept, d);
    salary = s;
    exp = e;
}
Employee::Employee(const Employee &e) : Employee(e.name, e.dept, e.salary, e.exp) {}
Employee &Employee::operator=(const Employee &e)
{
    if (this != &e)
    {
        delete[] name;
        delete[] dept;
        name = new char[strlen(e.name) + 1];
        strcpy(name, e.name);
        dept = new char[strlen(e.dept) + 1];
        strcpy(dept, e.dept);
        salary = e.salary;
        exp = e.exp;
    }
    return *this;
}
void Employee::input()
{
    char n[50], d[50];
    cout << "Enter Name: ";
    cin.getline(n, 50);
    cout << "Enter Dept: ";
    cin.getline(d, 50);
    cout << "Enter Salary: ";
    cin >> salary;
    cout << "Enter Experience: ";
    cin >> exp;
    cin.ignore();
    delete[] name;
    delete[] dept;
    name = new char[strlen(n) + 1];
    strcpy(name, n);
    dept = new char[strlen(d) + 1];
    strcpy(dept, d);
}
void Employee::show() const
{
    cout << "\nName: " << name << "\nDept: " << dept << "\nSalary: " << salary << "\nExperience: " << exp << " years\n";
}
Employee::~Employee()
{
    delete[] name;
    delete[] dept;
}

int main()
{
    Employee e1;
    e1.input();
    cout << "\n=== Original Employee ===";
    e1.show();
    Employee e2;
    e2 = e1;
    cout << "\n=== Copied using Assignment ===";
    e2.show();
    Employee e3(e2);
    cout << "\n=== Copied using Constructor ===";
    e3.show();
}
