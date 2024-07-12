// When properties and member functions of base class are passed on to the derived class
// Used for code reusability
// If one class has some properties/Methods and the second class also has the same things then it is better to inherit from the first class to second class instead of making new properties everywhere.
#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

/* Here public is a inheritance access modifier*/

// For initialization of child class objects first base class constructor is called and then child's constructor called.
// While in case of destructor first child's memory should be deallocated. So child class' constructor is called first and then base class' constructor is called.

class Student : public Person
{
    // Now name and age are already in the student class
    // So, just define the roll no.

public:
    int rollNo;
    // If base class' constructor is parameterised than have do it this way -> first Person will be called and then rollNo will be set.
    Student(string name, int age, int rollNo) : Person(name, age)
    {
        this->rollNo = rollNo;
    }
    void getInfo()
    {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "RollNo: " << rollNo << endl;
    }
};

int main()
{
    Student s1("Divyarajsinh", 20, 1155);

    // // s1.name = "Divyarajsinh";
    // s1.age = 20;
    // s1.rollNo = 1155;
    // Even though there were no properties in student class called name and age but they were inherited from person and acted as they are there in the student class.

    s1.getInfo();
    return 0;
}

// Mode of Inheritance

/*
             -------------------------------------------------
             | Derived class | Derived class | Derived class |
--------------------------------------------------------------
  Base Class | Private Mode  | ProtectedMode | Public Mode   |
--------------------------------------------------------------
    Private  | Not Inherited | Not Inherited | Not Inherited |
   Protected | Private       | Protected     | Protected     |
    Public   | Private       | Protected     | Public        |
--------------------------------------------------------------
*/