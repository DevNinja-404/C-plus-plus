// given the two numbers a and b. find a raised to the power b.

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    float res = 1;
    cout << "Enter the base :\n";
    cin >> a;
    cout << "Enter the power :\n";
    cin >> b;
    if (b > 0)
    {
        for (int i = 1; i <= b; i++)
        {
            res *= a;
        }
    }
    else
    {
        for (int i = 1; i <= -1 * b; i++)
        {
            res *= (float)1 / a;
        }
    }
    cout << a << " raised to the power " << b << " is " << res << "\n";
    return 0;
}