#include <iostream>
using namespace std;

class Student {
private:
    int marks1, marks2, marks3;

public:
    Student(int m1, int m2, int m3)
        : marks1(m1), marks2(m2), marks3(m3) {}


    friend void generateResult(Student s);
};

void generateResult(Student s) {
    int total = s.marks1 + s.marks2 + s.marks3;
    float average = total / 3.0;

    cout << "Total Marks: " << total << endl;
    cout << "Average: " << average << endl;

    if (average >= 40)
        cout << "Result: PASS" << endl;
    else
        cout << "Result: FAIL" << endl;
}

int main() {
    Student st1(65, 70, 55);
    generateResult(st1);

    return 0;
}
