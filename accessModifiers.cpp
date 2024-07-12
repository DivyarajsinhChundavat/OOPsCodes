#include <bits/stdc++.h>
using namespace std;

// Access Modifiers
// They're reserved words.

// Private : by Default
/*
    data and methods(functions) accesible only inside the class.
*/

// public:
/*
    Accessible everywhere inside or outside the class.
*/

// protected:
/*
    data & methods accessible inside class & to its derived class
*/

class Teacher
{
private:
    double salary;

public:
    string name;
    string dept;
    string subject;
    int age;
    int yearOfExperience;
    Teacher()
    {
        cout << "Yay!";
    }
    Teacher(string name, string dept, string subject, double salary, int age, int yearOfExperience)
    {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
        this->age = age;
        this->yearOfExperience = yearOfExperience;
    }
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    // setter functions - set the values of private members
    void setSalary(double amount)
    {
        this->salary = amount;
    }

    // getter functions - get the values of private members
    double getSalary()
    {
        return this->salary;
    }
};

int main()
{
    // Teacher t[4];
    Teacher t1("Divyarajsinh", "CS", "OOPs", 125000.00, 20, 2);
    t1.setSalary(100);
    cout << t1.getSalary() << endl;
    return 0;
}