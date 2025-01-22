// SO here we understand the concept of backtracking...

#include <iostream>

using namespace std;

void printNumbers(int i, int n)
{
    if (i > n)
        return;
    printNumbers(i + 1, n);
    cout << i << "\n";
}

int main()
{
    int num;
    cout << "Enter the number:" << endl;
    cin >> num;
    printNumbers(1, num);
    return 0;
}