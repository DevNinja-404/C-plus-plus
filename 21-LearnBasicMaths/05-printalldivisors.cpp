#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number:" << endl;
    cin >> num;
    cout << "The divisors of " << num << " are " << endl;
    cout << 1 << "\n";
    for (int i = 2; i <= (num / 2); i++)
    {
        if (num % i == 0)
        {
            cout << i << "\n";
        }
    }
    if (num != 1)
        cout << num << "\n";
    return 0;
}

// The time complexity of the above code is O(N/2) and we can optimize it to O(sqrt(N)) but since i want to print the factors of a number in increasing order so its fine.but remember the most optimized way is loop from 1 to sqrt(N) and print i and num/i since factors always occurs in pair and if u want that in sorted way here we can store these divisors in vector and then sort them so depending whether we need to store the divisors and manipulate them or not we can make our decision.