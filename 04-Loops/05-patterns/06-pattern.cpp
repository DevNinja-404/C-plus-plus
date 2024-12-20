// Print the following pattern:
// 1234567
// 2345671
// 3456712
// 4567123
// 5671234
// 6712345
// 7123456

#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter the no.of rows and columns" << endl;
    cin >> r >> c;
    for (int i = 1; i <= r; i++)
    {
        for (int j = i; j <= c; j++)
        {
            cout << j;
        }
        for (int j = 1; j < i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
    return 0;
}