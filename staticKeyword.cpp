#include <bits/stdc++.h>
using namespace std;

// Static Variables: Var declared as a stati in a function are created & initialised once for the lifetime of the program.

// Static Vars in a class are created & initialised once. They are shared by all the object of the class.
// Static things exist in a memory untill program  """finished""".
/*
if a child class inherits a static variable from a parent class and modifies it, the modification will be visible to all other instances of that class, including instances of the parent class and other subclasses of the parent.
*/

class Person
{
private:
public:
    static int age;
    void setAge(int x) { Person::age = x; }
    int getAge() { return age; }
};
int Person ::age = 0;

/*Static vars need to be initialised outside the class definition. To ensure the variable existance in memory.
=> Static member variables are accessed using the scope resolution operator :: because they belong to the class rather than instances of the class.
*/
class Student : public Person
{
public:
    // void setAge(int x)
    // {
    //     age = x;
    // }
};

main()
{
    Person p1, p2;
    p1.setAge(12);
    p2.setAge(p2.getAge() + 1);
    cout << p1.getAge() << '\n';
}

// Unlike other member functions, constructors cannot be virtual in C++.This is because the construction of an object starts from the base class constructor and proceeds through the derived class constructors.Therefore, there is no need to declare a virtual constructor in the base class
// Pure virtual constructor and destructor are not possible.

// => Static Objects:-  Objects that have a static storage duration. This means that they are created when the program starts and destroyed when the program ends.

/*Friend Func and Class + Operator Overloading -> Do it yourself*/