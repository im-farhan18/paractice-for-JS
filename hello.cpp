#include <iostream>
#include <cmath>
using namespace std;

void largnum(int a, int b, int c){
      if(a > b && a > c){
            cout<< a <<" = is lagest number  = a "<<endl;
      }
      else if(b > c ){
            cout<<b <<" = is largest number  =  b"<<endl;
      }
      else {
            cout<<c<<" = is largest number =   c"<<endl;
      }
      
}

int main()
{

      largnum(12 , 5 , 24);
      return 0;
}