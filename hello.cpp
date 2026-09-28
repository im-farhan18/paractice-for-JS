#include <iostream>
using namespace std;

int main()
{

int arr[5] = { 5, 3, 7,1 ,2 };
int n = sizeof(arr) / sizeof (int);

for(int i = 0 ; i < n ; i++){
  cout << arr[i]<<" ";
}

  return 0;
}