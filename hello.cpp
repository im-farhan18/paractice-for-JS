#include <iostream>
using namespace std;

int main()
{

  int arr[5];
  int n = sizeof(arr) / sizeof(int);

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << endl;

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
    cout << endl;
  }
  cout << endl;
  return 0;
}