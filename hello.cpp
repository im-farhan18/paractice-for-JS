#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter 3  numbers :" << endl;

    cout << "Enter a :";
    cin >> a;

    cout << "Enter b :";
    cin >> b;

    cout << "Enter c :";
    cin >> c;

    if (a > b)
    {
        cout << a << " is the larger then" << b << endl;
    }
    else
    {
        cout << b << "is the larger then" << a << endl;
    }

    return 0;
};