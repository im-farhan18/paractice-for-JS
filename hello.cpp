#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    int n;
    cout << "Enter a number :";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j<<"";
        }
        cout << endl;
    }

    return 0;
};

/*
output :

Enter a number :8

1
12
123
1234
12345
123456
1234567
12345678


 */