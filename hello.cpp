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
}

int main()
{

      return 0;
}