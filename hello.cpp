#include <iostream>
using namespace std;

int main()
{
  int arr[]={1,4,3,5,7,9,10,2,5};
  int n = sizeof(arr) / sizeof(arr[0]);

  int max = arr[0];

  for(int i= 0 ; i < n; i++){
    if(arr[i] > max){
      max =arr[i];
    }
  }
  cout<<"MAX value = " << max <<endl;

    return 0;
}