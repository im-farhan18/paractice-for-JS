#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    int n = 10;

    // OUTER LOOP
    for (int i = 1; i <= n; i++)
    {
        // Spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // Stars
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n; i >= 1; i--)
    {
        // Spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // Stars
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
};
