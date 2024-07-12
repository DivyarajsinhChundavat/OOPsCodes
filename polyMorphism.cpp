#include <bits/stdc++.h>
using namespace std;

// poly + morph = (multiple) + (forms) : ex-> constructor overloading.
/*
It is the ability of objects to take on different form or behave in different ways depending on the context in which they are used.
*/
// Types:
// 1) Compile time {Constructor and function(return type can be anything of those functions) Overloading} and Operator overloading (Do it byself) &
// 2) Runtime (Dynamic) overloading Ex - Function Overriding => It is the case in inheritance: If both case have same function with exactly same parameters child's function overrides parent's function

class Student
{
public:
    Student()
    {
        cout << "C1\n";
    }
    Student(int x)
    {
        cout << x << '\n';
    }
    void getInfo() { cout << "getInfo\n"; }
};
class Child : public Student
{
public:
    void getInfo() { cout << "notGetInfo\n"; } // Function overriding:
};
int main()
{

    return 0;
}