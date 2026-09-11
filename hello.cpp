#include <iostream>
#include <cmath>
using namespace std;

int sum(int a, int b)
{
      cout << a + b << endl;
      return a + b;
}

double sum(double a, double b)
{
      cout << a + b << endl;
      return a + b;
}

int main()
{

      sum(1, 2);
      sum(4, 6);
      sum(131, 222);
      sum(2.51, 2.34);

      return 0;
}