// SO here we understand the concept of backtracking...

#include <iostream>

using namespace std;

int findFactorial(int n)
{
    if (n == 0)
        return 1;
    return n * findFactorial(n - 1);
}

// Time Complexity -> O(N)
// Space Complexity ->Auxilliary Space -> Stack Space ->O(N) since N functions will be waiting in the recursive stack for its completion

// The recursive tree for the above function looks like :
// if num =3
// findFactorial(3)-> 3* findFactorial(2)-> 2 * findFactorial(1)->1 * factorial(0)->returns 1

int main()
{
    int num;
    cout << "Enter the number:" << endl;
    cin >> num;
    cout << "The factorial of " << num << " is " << findFactorial(num) << endl;
    return 0;
}