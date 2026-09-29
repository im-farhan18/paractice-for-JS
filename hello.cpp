#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int key)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == key)
    {
      return i;
    }
  }
  return -1;
}
int main()
{
  int arr[] = {3, 1, 5, -1, -4, 7, 10, 7, 4, 9, 11, 14};
  int n = sizeof(arr) / sizeof(int);
  int key;
cout<<"Enter a key :";
cin>>key;
  cout << linearSearch(arr, n, key) << endl;
  return 0;
}