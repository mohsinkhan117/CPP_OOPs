#include <bits/stdc++.h>
#include <string>
using namespace std;
class Employee
{
private:
    static int totalEmployees;
    int employeeId = 0;
    char name[50];
    char designation[50];

public:
    void newEmployee()
    {
    }
    Employee()
    {
        employeeId = 0;
        strcpy(name, "Null");
        strcpy(designation, "Null");
    }

    Employee(const char n[], const char d[], optional<int> id = nullopt)
    {
        if (id.has_value())
            employeeId = id.value();
        else
            employeeId = ++totalEmployees;
        strcpy(name, n);
        strcpy(designation, d);
    }
    void newEmployee()
    {
        cout << "Enter name: ";
        cin.ignore();
        cin.getline(name, 50);
        cout << "Enter designation: ";
        cin.getline(designation, 50);
        employeeId = ++totalEmployees;
    }

    void updateEmployeeRecord()
    {
        cout << "Name: " << name << ", Designation: " << designation << ", ID: " << employeeId << "," << endl;
        int record;
        cout << "Update Record:\n\t1-> Name, 2-> Designation, 3-> ID" << endl;
        cin >> record;
        cin.ignore();
        switch (record)
        {
        case 1:
            cout << "Enter new name: ";
            cin.getline(name, 50);
            break;

        case 2:
            cout << "Enter new designation: ";
            cin.getline(designation, 50);
            break;

        case 3:
            cout << "Enter new ID: ";
            cin >> employeeId;
            break;

        default:
            cout << "Invalid choice!" << endl;
            break;
        }
    }
    void showTotalEmployees()
    {
        cout << "Total Employees: " << totalEmployees << endl;
    }
    void showEmployeeRecord()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Designation: " << designation << endl;
        cout << "Employee ID: " << employeeId << endl;
    }
};
int Employee::totalEmployees = 0;
int main()
{
    Employee e1("Ahmed", "Manager");
    Employee e2("Ali", "Developer");
    Employee e3("Sara", "HR", 101);

    e1.showEmployeeRecord();
    e2.showEmployeeRecord();
    e3.showEmployeeRecord();
    e3.showTotalEmployees();

    e1.updateEmployeeRecord();
    e2.updateEmployeeRecord();
    e1.showEmployeeRecord();
    e2.showEmployeeRecord();
}