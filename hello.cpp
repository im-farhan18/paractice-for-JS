#include <iostream>
#include <cmath>
using namespace std;

void changeA(int *ptr)
{
      *ptr = 20;
      cout << *ptr << endl;
}

int main()
{
      int a = 10;
      int &b = a;

      cout << b << endl
           << endl;

      b = 12;
      cout << b << endl;
      cout << a << endl
           << endl;

      a = 15;
      cout << a << endl;
      cout << b << endl;

      return 0;
}