#include <iostream>
using namespace std;

void change(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;

  cout << " a = " << a << endl;
  cout << " b = " << b << endl;
  cout << " temp = " << temp << endl;
}
int main()
{
  int a = 10, b = 20;
  cout << "main-function  a  = " << a << endl;
  cout << "main-function  b  = " << b << endl;
  change(a, b);

  return 0;
}