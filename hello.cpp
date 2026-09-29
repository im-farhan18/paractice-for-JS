#include <iostream>
using namespace std;


void printarry(int arry []){
    int n = sizeof(arry)/sizeof(int);

    for(int i = 0 ; i < n ; i++){
      cout << arry [i]<< ",";
    }
}

int main()
{

  int arr[] = {3,1,5,-1,-4,7,10, 7,4,9,11,14,};

  printarry(arr);
  cout<<arr[4];
 return 0;
}