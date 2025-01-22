#include <iostream>

using namespace std;

void printNumbers(int n)
{
    if (n == 0)
        return;
    cout << n << "\n";
    printNumbers(--n);
}

int main()
{
    int num;
    cout << "Enter the number:" << endl;
    cin >> num;
    printNumbers(num);
    return 0;
}