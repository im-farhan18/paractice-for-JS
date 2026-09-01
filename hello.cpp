#include <iostream>
using namespace std;

int main()
{
    int age;

    cout<<"Enter your age :";
    cin>>age;

    if(age >= 18) {
        cout<<"Conratulation !"<< endl<<"you are eligble for PAN card"<<endl;
    }
    else{
        cout<<"Sorry"<<endl<<"you are not eligble for PAN card"<<endl;
    }






    return 0;
};