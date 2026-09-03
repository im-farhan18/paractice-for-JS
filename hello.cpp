#include <iostream>
using namespace std;

int main()
{
    int n = 10898;
    int digsum = 0;

    while (n > 0)
    {
        int lastdigit = n % 10;
        if( lastdigit % 2 != 0)
        {
            digsum += lastdigit;
        }
        cout << lastdigit << " ";
        n = n / 10;
    }
    cout << "Sum of digits: " << digsum << endl;
    return 0;
};