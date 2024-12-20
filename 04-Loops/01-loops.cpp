// Print the sum of first n natural numbers ,where n is the input

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, i = 1;
    cout << "Enter the no. of natural numbers:" << endl;
    cin >> n;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    cout << "The sum of the first " << n << " natural numbers is " << sum << "\n";
    return 0;
}