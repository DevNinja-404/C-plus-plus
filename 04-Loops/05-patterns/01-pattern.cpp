// Print the following pattern:
// ******
// ******
// ******

#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter the no.of rows and columns : " << endl;
    cin >> r >> c;
    cout << "The required pattern is :" << endl;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}