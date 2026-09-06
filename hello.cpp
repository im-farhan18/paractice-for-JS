#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    int n;
    cout << "Enter a number :";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << i<< " ";
        }
        cout << endl; 
    }

    return 0;
};

/*  
output :

Enter a number :8
1 1 1 1 1 1 1 1 
2 2 2 2 2 2 2 2 
3 3 3 3 3 3 3 3 
4 4 4 4 4 4 4 4 
5 5 5 5 5 5 5 5 
6 6 6 6 6 6 6 6 
7 7 7 7 7 7 7 7 
8 8 8 8 8 8 8 8 /*