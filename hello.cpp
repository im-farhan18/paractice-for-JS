#include <iostream>
#include <cmath>
using namespace std;



int main()
{

      int a = 1;
      int *ptr  = &a;

      int **pptr = &ptr;
      cout<< pptr<<endl;


      return 0;
}