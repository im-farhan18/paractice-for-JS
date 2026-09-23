#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    int *b = &a;
    // cout<< &a <<endl<<b<<endl;

    float pi = 3.14159;
    float *c = &pi;

    // cout<<&pi <<endl<<c<<endl;
    cout << "int = " << sizeof(a) << endl;
    cout << "float = " << sizeof(c);

    return 0;
}