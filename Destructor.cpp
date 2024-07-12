#include <bits/stdc++.h>
using namespace std;

// If you don't make it, it is still called by default to clean the objects -> It also cleans the statically allocated memory. It deletes the ptr from the stack but not the memory pointed by that ptr into the heap.
// Destructor can never have any input parameters

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
        this->studentName = originalStudent.studentName;
        this->studentCpiPtr = new double;
        *(this->studentCpiPtr) = *(originalStudent.studentCpiPtr);
    }
    void getInfo()
    {
        cout << "Name: " << studentName << endl;
        cout << "CPI:" << *studentCpiPtr << endl;
    }
    ~Student()
    {
        delete studentCpiPtr;
        studentCpiPtr = NULL;
        cout << "Thank You for Calling.";
    }
};
int main()
{
    Student s1("rahul kumar", 9.12);
    s1.getInfo();
    Student s2(s1);

    return 0;
}

/*
1) Undefined Behavior: Accessing or using an object after its destructor has been called leads to undefined behavior. This means the behavior of your program becomes unpredictable and can vary depending on the compiler, operating system, and runtime environment.

2) Double Destruction: If you call the destructor explicitly and then the destructor is called again automatically when the object goes out of scope or is deleted, it will attempt to delete the memory again, leading to a double destruction error. This is a serious issue and can crash your program or corrupt memory.
*/