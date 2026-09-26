#include <iostream>
using namespace std;

void change (int &a ){
a =20;
cout<<a<<endl;

}
int main()
{
      int a = 10;
    change(a);
  
    // int &b = a;
    // b = 25;
    // cout<<b<<endl;
    cout<<a<<endl;
  

    return 0;
}