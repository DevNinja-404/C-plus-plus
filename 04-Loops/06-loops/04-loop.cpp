// find the sum of the given series
// s=1-2+3-4...n

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter the no. of terms in the given series:\n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum -= i;
        }
        else
        {
            sum += i;
        }
    }
    cout << "The sum of the series is :" << sum;
    return 0;
}