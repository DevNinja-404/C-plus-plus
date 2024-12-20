// Print the following pattern:
//    1
//   2 2
//  3   3
// 4444444

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
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            if (i == r || i == 1 || j == 1 || j == (2 * i - 1))
            {
                cout << i;
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}