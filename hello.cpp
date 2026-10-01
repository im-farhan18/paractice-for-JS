#include <iostream>
using namespace std;

void func(int arr[], int n)
{

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << ",";
  }
  cout << endl;
}

int main()
{
  int arr[] = {1, 4, 3, 5, 7, 9, 10, 2, 5};
  int n = sizeof(arr) / sizeof(arr[0]);

  func(arr, n);

  return 0;
}