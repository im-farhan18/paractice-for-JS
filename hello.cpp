#include <iostream>
using namespace std;

int main()
{

  int arr[] = {3,1,5, -1,-4,-7,-10,7,4,9,11,14,};
  int n = sizeof(arr) / sizeof(int);

  int min = arr[0];
  for (int i = 0; i < n; i++)
  {

    if (arr[i] < min)
    {
      min = arr[i];
      cout << "assigning value = " << arr[i] << " to max \n";
    }
  }

  cout << "Min = " << min << endl;
  return 0;
}