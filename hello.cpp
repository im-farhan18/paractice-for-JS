#include <iostream>
using namespace std;

void printarr(int arr[], int n)
{

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << ",";
  }
  cout << endl;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = sizeof(arr) / sizeof(arr[0]);
  int copy[n];

  for (int i = 0; i < n; i++)
  {
    int j = n - i - 1;
    copy[i] = arr[j];
  }

  for (int i = 0; i < n; i++)
  {
    arr[i] = copy[i];
  }

  printarr(arr, n);

  return 0;
}