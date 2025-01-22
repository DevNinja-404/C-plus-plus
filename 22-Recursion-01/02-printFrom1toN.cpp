#include <iostream>

using namespace std;

void printNumbers(int i, int n)
{
    if (i > n)
        return;
    cout << i << "\n";
    printNumbers(++i, n);
}

int main()
{
    int num;
    cout << "Enter the number:" << endl;
    cin >> num;
    printNumbers(1, num);
    return 0;
}