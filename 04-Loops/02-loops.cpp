// Print the first multiple of 5 which is also a multiple of 7 .

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1;; i++)
    {
        if ((5 * i) % 7 == 0)
        {
            cout << "The first multiple of 5 which is also a multiple of 7 is " << 5 * i << endl;
            break;
        }
    }
    return 0;
}