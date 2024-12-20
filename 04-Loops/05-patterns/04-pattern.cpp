// Print the following pattern:
// ****
// ***
// **
// *

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

            cout << '*';
        }
        cout << "\n";
    }
    return 0;
}