#include <bits/stdc++.h>
using namespace std;

// Static Variables: Var declared as a stati in a function are created & initialised once for the lifetime of the program.

// Static Vars in a class are created & initialised once. They are shared by all the object of the class.

/*
if a child class inherits a static variable from a parent class and modifies it, the modification will be visible to all other instances of that class, including instances of the parent class and other subclasses of the parent.
*/

class Person
{
private:
    static int age;

public:
    inline void setAge(int x) { age = x; }
    inline int getAge() { return age; }
};

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
// => Static Objects:-