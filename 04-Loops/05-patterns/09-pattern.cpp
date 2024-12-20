// Print the following pattern:
//    1
//   121
//  12321
// 1234321

#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter the no.of rows " << endl;
    cin >> r;
    for (int i = 1; i <= r; i++)
    {
        for (int j = r; j >= i; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j;
        }
        cout << "\n";
    }

    return 0;
}