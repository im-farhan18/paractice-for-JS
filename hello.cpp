#include <iostream>
using namespace std;

int main()
{
    float radius;
    float PI = 22/7;

    cout << "Enter the Radius :";
    cin >> radius;

    cout << "the total area of circle is :" << (PI * radius * radius) << endl;

    return 0;
};