/*
 -> Encapsulation, Abstraction, Inheritance and Polymorphism are the 4 pillars of OOPs.
*/

#include <bits/stdc++.h>
using namespace std;

// Encapsulation = wrapping up of data & member functions in a single unit called class.
// Enc. = Data Attributes + Member Func

// Making Teacher class was encapsulation. Yes it is really just a process of making a class.

// Helps in
/*
    Data Hiding
*/

class Account
{
private:
    double accBalance;
    string accPassword;

public:
    // Default constructor must be "public".
    Account()
    {
    }
    string accHolderNam;
    string accNumber;
    string ifscCode;
};

int main()
{
    Account iam;
}

// So, Data hiding implemented using encapsulation.
//  Made a class and so used access modifiers, used access modifiers that means we implemented an easy peasy encapsulation.