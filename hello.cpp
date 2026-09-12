#include <iostream>
#include <cmath>
using namespace std;

void binTOdec(int binNum)
{
      int n = binNum;
      int dec = 0;
      int pow = 1;

      while (n > 0)
      {
            int lastdigit = n % 10;
            dec += lastdigit * pow;
            pow = pow * 2;
            n = n / 10;
      }

      cout << dec << endl;
}

void decTobin(int decnum)
{
      int n = decnum;
      long long  pow = 1;
      long long  binNum = 0;

      while (n > 0)
      {
            int rem = n % 2;
            binNum += rem * pow;
            n = n / 2;
            pow = pow * 10;
      }

      cout << binNum << endl;
}

int main()
{

      binTOdec(100011100);
      decTobin(20000084);
      return 0;
}