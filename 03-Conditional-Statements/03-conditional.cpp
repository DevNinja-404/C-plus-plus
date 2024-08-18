// WAP to print the value if it is even and divisible by 3.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number :" << endl;
    cin >> num;
    if (num % 2 == 0 && num % 3 == 0)
    {
        cout << num << " is even and divisible by 3" << endl;
    }
    return 0;
}