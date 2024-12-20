// find the reverse of given number

#include <iostream>
using namespace std;

int main()
{
    int num, temp, rev = 0;
    cout << "Enter the number:" << endl;
    cin >> num;
    temp = num;
    while (temp > 0)
    {
        int rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    cout << "The sum of digits of " << num << " is " << rev << endl;
    return 0;
}