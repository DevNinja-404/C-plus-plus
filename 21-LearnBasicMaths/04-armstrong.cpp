#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num, digits, temp, res = 0;
    cout << "Enter a number:" << endl;
    cin >> num;
    digits = (int)(log10(num) + 1);
    cout << digits << endl;
    temp = num;
    while (temp > 0)
    {
        int rem = temp % 10;
        res = res + pow(rem, digits);
        temp /= 10;
    }
    if (num == res)
    {
        cout << num << " is an armstrong number" << endl;
    }
    else
    {

        cout << num << " is not an armstrong number" << endl;
    }
    return 0;
}
