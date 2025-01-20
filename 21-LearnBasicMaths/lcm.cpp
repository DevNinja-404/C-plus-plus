#include <iostream>
using namespace std;

int main()
{
    int num1, num2, a, b;
    cout << "Enter any two numbers : " << endl;
    cin >> a >> b;
    num1 = a;
    num2 = b;
    while (num2 > 0)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp % num2;
    }
    // Note : LCM * GCD = | a * b |
    cout << "LCM of " << a << " and " << b << " is " << a * b / num1 << endl;
    return 0;
}
