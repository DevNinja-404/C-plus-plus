// Convert Decimal Number to Binary

#include <iostream>
using namespace std;
int main()
{
    int num, res = 0, power = 1;
    cout << "Enter a decimal number:";
    cin >> num;
    int temp = num;
    for (int i = 0; temp > 0; i++)
    {
        int rem = temp % 2;
        res = res + rem * power;
        power *= 10;
        temp = temp / 2;
    }
    cout << "The binary equivalent of " << num << " is " << res << endl;
    return 0;
}