// SO here we understand the concept of backtracking...

#include <iostream>

using namespace std;

// Parameterized Way :
void printSum(int i, int sum)
{
    if (i < 1)
    {
        cout << "The sum is : " << sum << endl;
        return;
    }
    printSum(i - 1, sum + i);
}

// The recursive tree for the above function looks like :
// if num =3
// printSum(3,0)->printSum(2,3)->printSum(1,5)->printSum(0,6)->returns

// Sum returning recursive function :
int findSum(int n)
{
    if (n == 0)
        return 0;
    return n + findSum(n - 1);
}

// The recursive tree for the above function looks like :
// if num =3
// findSum(3)-> 3+ findSum(2)-> 2 + findSum(1)-> 1+findSum(0)->returns 0;

int main()
{
    int num;
    cout << "Enter the number:" << endl;
    cin >> num;
    // printSum(num, 0);
    cout << "The sum of first " << num << " numbers is " << findSum(num) << endl;
    return 0;
}