#include <iostream>
using namespace std;

int func(int arr[], int n, int key)
{

  for (int i = 0; i < n; i++)
  {
  if(arr[i] == key){
    cout<< key<<" is exist on index :"<<i<<endl;
  }
  }
  return -1;
  
}

int main()
{
  int arr[] = {1, 4, 3,  7, 9, 10, 2, 5};
  int key ;
  cout<<"enter the key you wanted to find : ";
  cin>>key;
  int n = sizeof(arr) / sizeof(arr[0]);

cout<<  func(arr, n,key)<<endl;

  return 0;
}