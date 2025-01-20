// Given a number n ,find its reverse

#include <iostream>

using namespace std;

// T.C => O(log10N + 1)
// S.C => O(1)

int reverseNum(int n)
{
    int rev = 0;
    while (n != 0)
    {
        int rem = n % 10;
        if (rev > (INT32_MAX - rem) / 10)
        {
            return 0;
        }
        rev = rev * 10 + rem;
        n = n / 10;
    }
    return rev;
}

int main()
{
    int num;
    cout << "Enter a number:" << endl;
    cin >> num;
    cout << "The reverse of " << num << " is " << reverseNum(num) << endl;

    return 0;
}