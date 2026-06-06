#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    char *name;
    int age;
    float gpa;

public:

    Student() {
        name = new char[10];
        strcpy(name, "Your Name");
        age = 22;
        gpa = 0.0;
    }

    Student(const char n[], int a, float g) {
        int size = strlen(n);
        name = new char[size + 1];
        strcpy(name, n);
        age = a;
        gpa = g;
    }

    // Copy constructor
    Student(const Student &obj) {
        int size = strlen(obj.name);
        name = new char[size + 1];
        strcpy(name, obj.name);
        age = obj.age;
        gpa = obj.gpa;
    }

    void show() {
        cout << "Name: " << name << endl;
        cout << "Age : " << age << endl;
        cout << "GPA : " << gpa << endl;
    }


    ~Student() {
        delete[] name;
    }
};

int main() {
    Student s1("Ahmed", 22, 3.2);
    s1.show();

    Student s2(s1);  // calls copy constructor
    s2.show();

    return 0;
}
