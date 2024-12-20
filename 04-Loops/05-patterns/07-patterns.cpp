// Print the following pattern:
// 123456
// 1    6
// 1    6
// 123456

#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter the no.of rows and columns" << endl;
    cin >> r >> c;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (i == 1 || i == r || j == 1 || j == c)
            {

                cout << j;
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