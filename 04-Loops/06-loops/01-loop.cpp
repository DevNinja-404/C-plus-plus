// Count the number of digits for a given number n.

#include <iostream>
using namespace std;

int main()
{
    int num, temp, digits = 0;
    cout << "Enter the number:" << endl;
    cin >> num;
    temp = num;
    while (temp > 0)
    {
        digits++;
        temp = temp / 10;
    }
    cout << "The no. of digits in " << num << " is " << digits << endl;
    return 0;
}