#include <bits/stdc++.h>
using namespace std;

class Teacher
{

    // Attributes or Properties

    double salary;
    int age;
    int yearOfExperience;

public:
    string name;
    string dept;
    string subject;
    //   Class is only a blueprint it doesn't occupy any signifiacnt space in the memory but when you call an instance of the object they occupy the space in memory.
    //   Constructor invoked automatically at the time of object creation. Used for Initialisation.
    //   Same name as class.
    //   Doesn't have a retuen type
    //   Only called once(automatically) at time of object creation.
    //   Memory allocation happen only when constructor is called.

    Teacher() // Non Parameterized constructor
    {
        dept = "CS";
        name = "Vallabh";
        // cout << "C1";
    }
    Teacher(string name, string dept, string subject, double salary, int age, int yearOfExperience) // parameterized constructor
    {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
        this->age = age;
        this->yearOfExperience = yearOfExperience;
    }

    /*-----Copy Constructor------*/
    Teacher(Teacher &originalObject)
    {
        cout << "I am custom copy constructor\n";
        this->dept = originalObject.dept;
    }

    // Two constructor = constructor overloading (one of their para should be different)

    void changeDept(string newDept)
    {
        dept = newDept;
    }
    string getName()
    {
        return this->name;
    }
};
// this (->) pointer is automatically created pointer to the memory address of created object

// Copy Constructor => It is a special constructor (default) used to copy properties of one object into another
// Ex - Teacher t1; Teacher t2(t1);
main()
{
    // Teacher t[4];
    Teacher t1;
    cout << t1.dept << t1.name << endl;
}