#include <iostream>
#include <cmath>
using namespace std;

int main()
{

      string s = "1";
      int n = s.size();
      int dec = 0;
      int p = 0;

      for (int i = n - 1; i >= 0; i--)
      {
            cout << "Currently at " << i << "th position. power to mulitieply is 2^" << p << endl;
            dec += s[i] * pow(2, p);
            p++;
      }

      cout << dec << endl;

      return 0;
}