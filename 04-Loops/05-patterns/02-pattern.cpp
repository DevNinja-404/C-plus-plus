// Print the following pattern:
// ******
// *    *
// *    *
// ******

#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter the no.of rows and columns : " << endl;
    cin >> r >> c;
    cout << "The required pattern is :" << endl;

    // What i wrote lol:
    // for (int i = 1; i <= r; i++)
    // {

    //     for (int j = 1; j <= c; j++)
    //     {
    //         if (i > 1 && i < r)
    //         {
    //             if (j > 1 && j < c)
    //             {
    //                 cout << " ";
    //                 continue;
    //             }
    //             cout << "*";
    //         }
    //         else
    //         {

    //             cout << "*";
    //         }
    //     }
    //     cout << "\n";
    // }

    // Better Approach:
    for (int i = 1; i <= r; i++)
    {

        for (int j = 1; j <= c; j++)
        {
            if (i == 1 || i == r || j == 1 || j == c)
            {

                cout << "*";
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