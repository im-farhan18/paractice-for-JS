#include <iostream>
using namespace std;

int main()

{

    int num = 10829;
    while (num > 0)
    {
        int digit = num % 10;
        cout << digit << " ";
        num /= 10;
    }

    return 0;
};