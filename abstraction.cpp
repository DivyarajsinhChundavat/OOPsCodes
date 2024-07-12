#include <bits/stdc++.h>
using namespace std;

// Hiding all unnecessary details & showing only the important parts
// Example - Access  Modifiers: Somethings are private while some are protected and public.

/*
    Definition: Abstraction is the process of hiding the implementation details of a particular set of functionalities, showing only the essential features. This is achieved by using abstract classes and interfaces in OOP languages.

    Purpose: The main goal of abstraction is to manage complexity by hiding unnecessary details from the user, making it easier to understand and work with the system. It helps in reducing programming complexity and effort.
*/

// It is just made for inheritance(provide a base class) not for object instantiation.
// Define an interface for derived classes.

class Shape
{

private:
    virtual void draw() = 0; // pure virtual function. Has no implementation in a base class and must be overridden in a derived class.
    // Even though they are private but still inherited in the childs class. And need to be overridden.
};

class Circle : public Shape
{
public:
    void draw()
    {
    }
};

main()
{
    Circle c;
    cout << "OKAY\n";
    return 0;
}

/*
    Real-life Use: Consider a framework where different types of plugins need to interact with a core system. By defining abstract classes with pure virtual functions, the framework ensures that each plugin implements necessary functionalities correctly.
*/