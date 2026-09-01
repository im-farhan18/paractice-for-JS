#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter your marks :";
    cin >> marks;

    if (marks >= 95 || marks <= 100)
    {
        cout << "grade : A++" << endl;
    }

    else if (marks >= 80)
    {
        cout << "grade : A+" << endl;
    }

    else if (marks >= 70)
    {
        cout << "grade : A" << endl;
    }
    else if (marks >= 60)
    {
        cout << "grade : B+" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }
    return 0;
};