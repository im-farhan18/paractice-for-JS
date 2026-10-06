#include <iostream>
using namespace std;

bool searchtarget(int *arr, int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
        
    }
    return false;
}
int main()

{

    int arr[] = {5, 2, 20, 1, 30, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Enter a target :";
    int target;
    cin>>target;

cout << (searchtarget(arr, n, target) ? true : false);}