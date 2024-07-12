#include <bits/stdc++.h>
using namespace std;

// Default copy constructor is shallow copy constructor -> A "shallow" copy of an object copies all of the member values from one object to another. Basically, copies stack based memory.

// A "Deep" copy, on other hand not only copies the member values but also makes copies of any dynamically allocated memory that the members point to.
// Also, copies heap based memory.

class Student
{
public:
    string studentName;
    double *studentCpiPtr;

    Student(string studentName, double studentCpi)
    {
        this->studentName = studentName;
        studentCpiPtr = new double;
        *studentCpiPtr = studentCpi;
    }
    Student(Student &originalStudent)
    {
        /*
        In this case new object's cpi pointer stores value of original object's cpi pointer and thus refer to
        the same memory of original object's memory: And hence any change in cpi of either student will reflet for the both students.

        ------Implementation--------
        this->studentCpiPtr = originalStudent.studentCpiPtr;
        this->studentName = originalStudent.studentName;
        */

        /*------Below down implementation will help us encounter this situation------*/
        this->studentName = originalStudent.studentName;
        this->studentCpiPtr = new double;
        *(this->studentCpiPtr) = *(originalStudent.studentCpiPtr);
    }
    void getInfo()
    {
        cout << "Name: " << studentName << endl;
        cout << "CPI:" << *studentCpiPtr << endl;
    }
};
int main()
{
    Student s1("rahul kumar", 9.12);
    s1.getInfo();
    Student s2(s1);
    s2.getInfo();
    *(s1.studentCpiPtr) = 10;
    s1.getInfo();
    s2.getInfo();
    return 0;
}