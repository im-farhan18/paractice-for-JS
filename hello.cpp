#include <iostream>
#include <cmath>
using namespace std;

char nextchar(char c ){
      cout<<"the next alphabet after "<<c<<" is : "<<endl;
      return c + 1;
}

int main()
{

      
      cout<<nextchar('D');
      return 0;
}