#include <iostream>
#include <cmath>
using namespace std;

int main()
{
      int a = 5, y = 10;

      int *ptr1 = &a, *ptr2 = &y;

      ptr2 = ptr1;

      cout << ptr1 << endl;
      cout << ptr2 << endl;
      cout << &a << endl;

      return 0;
}