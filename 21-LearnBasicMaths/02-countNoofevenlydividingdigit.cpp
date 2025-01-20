// Given a number n find the no. of digits whithin n which perfectly divides n.

#include <iostream>
using namespace std;

int countDigits(int n)
{
    int temp = n, count = 0;
    while (temp > 0)
    {
        int digit = temp % 10;
        if (digit != 0 && n % digit == 0)
        {
            count++;
        }
        temp = temp / 10;
    }
    return count;
}

int main()
{
    int num;
    cout << "Enter a number :" << endl;
    cin >> num;
    cout << "The no. of digits which evenly divides " << num << " is " << countDigits(num) << endl;
    return 0;
}