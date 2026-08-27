#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float pen;
    float pencil;
    float eraser;

    cout << "Enter the Amount of pen :";
    cin >> pen;

    cout << "Enter the Amount of pencil :";
    cin >> pencil;

    cout << "Enter the Amount of Eraser :";
    cin >> eraser;

    float amount = pen + pencil + eraser;

    float toal_amount = amount + (0.18 * amount);

    cout << "your tatal BILL with GST is $" << toal_amount  << endl;

    return 0;
};