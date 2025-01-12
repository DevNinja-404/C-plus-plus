// Convert a binary number to decimal

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num, res = 0;
    cout << "Enter a binary number:";
    cin >> num;
    int temp = num;
    for (int i = 0; temp > 0; i++)
    {
        int rem = temp % 10;
        if (rem != 0)
        {
            res = res + rem * pow(2, i);
        }
        temp = temp / 10;
    }
    cout << "The decimal equivalent of " << num << " is " << res << endl;
    return 0;
}