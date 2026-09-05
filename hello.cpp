#include <iostream>
#include <cmath>
using namespace std;

int main()

{

    int num;
    cout << "Enter the number :" << endl;
    cin >> num;

    for (int i = 2; i >= num -1 ; i++)

    if ( num % i == 0 ) {
         int fact =  fact* i;
        cout << i << " is a factorial of NUMber :"<< endl;
    }
    else {
        cout <<"*"<<endl;
    }


    return 0;
};