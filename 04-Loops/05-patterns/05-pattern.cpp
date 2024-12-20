// Print the following pattern:
//    *
//   ***
//  *****
// *******

#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter the no.of rows " << endl;
    cin >> r;
    for (int i = 1; i <= r; i++)
    {
        for (int j = i; j <= r - 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << '*';
        }
        cout << "\n";
    }
    return 0;
}