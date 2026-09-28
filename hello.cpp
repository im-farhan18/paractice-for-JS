#include <iostream>
using namespace std;

int main()
{

  int num;
  cout << "enter the length of array :";
  cin >> num;

    int arr[num];
  int n = sizeof(arr) / sizeof(int);

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << endl;

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << ",";
    
  }
  cout << endl;
  return 0;
}