#include <iostream>
#include <cmath>
using namespace std;

int main()
{
      int arr[6] = {5, 4, 7, 8, 2, 10};
      int n = sizeof(arr) / sizeof(int);

      int max = arr[0];
      int min = arr[0];
      for (int i = 0; i < n; i++)
      {
            if (arr[i] > max)
            {
                  max = arr[i];
                  cout << "assigning val " << arr[i] << " to max" << endl;
            }
            if (arr[i] < min)
            {
                  min = arr[i];
            }
      }
      cout << "largest in array = " << max << endl;
      cout << "smallest in array = " << max << endl;

      return 0;
}