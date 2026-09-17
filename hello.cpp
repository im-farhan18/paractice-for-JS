#include <iostream>
#include <cmath>
using namespace std;

int main()
{

      int marks[5] = {1, 2, 3, 4, 5};
      int lenth = sizeof(marks) / sizeof(int);

      for (int i = 0; i <= lenth - 1; i++)
      {
            cout<<marks[i]<<" ";
      }
      cout<<endl;

      return 0;
}