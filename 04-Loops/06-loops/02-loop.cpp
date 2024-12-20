// find the sum of digits in a given number

#include <iostream>
using namespace std;

int main()
{
    int num, temp, sum = 0;
    cout << "Enter the number:" << endl;
    cin >> num;
    temp = num;
    while (temp > 0)
    {
        int rem = temp % 10;
        sum = sum + rem;
        temp = temp / 10;
    }
    cout << "The sum of digits of " << num << " is " << sum << endl;
    return 0;
}