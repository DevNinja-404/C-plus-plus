// SO here we understand the concept of backtracking...

#include <iostream>

using namespace std;

// We made sure that the cout of the last function will be executed first by writing the cout after the recursive call which ensures the cout will not be executed unless the base condition is matched since we had to print from 1 to N

void printNumbers(int n)
{
    if (n == 0)
        return;
    printNumbers(n - 1); // It evaluates n-1 and calls printNumbers() but when we use --n,it actually changes the value of n in the currentFunction and then calls printNumbers()
    cout << n << "\n";
}

int main()
{
    int num;
    cout << "Enter the number:" << endl;
    cin >> num;
    printNumbers(num);
    return 0;
}