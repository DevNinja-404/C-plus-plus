#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter the first Number : ";
    cin >> num1;
    cout << "Enter the Second Number : ";
    cin >> num2;

    cout << "Before Swapping :" << endl;
    cout << "Num1 = " << num1 << " and Num2 = " << num2 << endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "After Swapping :" << endl;
    cout << "Num1 = " << num1 << " and Num2 = " << num2 << endl;
    return 0;
}