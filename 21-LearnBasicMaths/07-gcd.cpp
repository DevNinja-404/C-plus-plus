#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter any two numbers : " << endl;
    cin >> num1 >> num2;

    // The time complexity is O(min(num1,num2));
    // for (int i = min(num1, num2); i >= 1; i--)
    // {
    //     if (num1 % i == 0 && num2 % i == 0)
    //     {
    //         cout << "GCD of " << num1 << " and " << num2 << " is " << i;
    //         break;
    //     }
    // }

    // Euclidean Algorithm :
    // Time complexity :O(log(min(a,b))) the base of log is phi...
    while (num2 > 0)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp % num2;
    }
    cout << "GCD is:" << num1;

    return 0;
}
