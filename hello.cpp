#include <iostream>
using namespace std;

void reversearray(int *arr, int n)
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
  int n = sizeof(arr) / sizeof(int);

int start = 0, end = n-1;

while(start < end ){
swap(arr [start],arr [end]);
  start++;
  end--;

  reversearray(arr, n);
}
return 0;
}