// Print the following pattern:
// 121212
// 212121
// 121212
// 212121

#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter the no.of rows and columns" << endl;
    cin >> r >> c;

    // What i did lol:
    // for (int i = 1; i <= r; i++)
    // {
    //     if (i % 2 == 0)
    //     {

    //         for (int j = 1; j <= c; j++)
    //         {
    //             if (j % 2 == 0)
    //             {
    //                 cout << "1";
    //             }
    //             else
    //             {
    //                 cout << "2";
    //             }
    //         }
    //     }
    //     else
    //     {
    //         for (int j = 1; j <= c; j++)
    //         {
    //             if (j % 2 == 0)
    //             {
    //                 cout << "2";
    //             }
    //             else
    //             {
    //                 cout << "1";
    //             }
    //         }
    //     }

    //     cout << "\n";
    // }

    // Better Approach :
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1";
            }
            else
            {
                cout << "2";
            }
        }
        cout << "\n";
    }
    return 0;
}