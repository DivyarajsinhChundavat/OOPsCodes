// They are member functions that you expect to be redefined in derived classes.

#include <bits/stdc++.h>
using namespace std;

// Defined by the keyword virtual inside a base class and are always declared with a base class and overridden in a child class.
// A virtual function is called during Runtime.

class Person
{
public:
    int age;
    string name;
    string nationality;

    virtual void getAge()
    {
        cout << age << '\n';
    }
};

class Student : public Person
{
public:
    int standard;
    int rollNum;
    string degreeName;

    void getAge()
    {
        cout << "I have been executed\n";
        cout << age << '\n';
    }
};

main()
{
    Student s1;
    s1.age = 20;
    s1.name = "Divyarajsinh";
    s1.nationality = "Indian";
    s1.standard = 14;
    s1.rollNum = 1155;
    s1.getAge();
    return 0;
}