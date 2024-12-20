// Print the factorial of first n non-negative numbers

#include <iostream>
using namespace std;

int main()
{
    int num, fact = 1;
    cout << "Enter any postive number:" << endl;
    cin >> num;
    for (int i = 0; i <= num; i++)
    {
        if (i == 0 || i == 1)
        {
            cout << "The factorial of " << i << " is " << fact << "\n";
        }
        else
        {
            for (int j = i; j > 1; j--)
            {
                fact *= j;
            }
            cout << "The factorial of " << i << " is " << fact << "\n";
        }
        fact = 1;
    }

    return 0;
}