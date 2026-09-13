#include <iostream>
#include <cmath>
using namespace std;

int findsum(int n)
{
      int sum = 0;
      while (n > 0)
      {

            int lastdigit = n % 10;
            sum += lastdigit;
            n = n / 10;
      }

      return sum;
}

int main()
{

      cout << findsum(436676764);

      return 0;
}