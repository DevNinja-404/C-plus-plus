// Print the sum of the stream of N integers in the input using the do-while loop

#include <iostream>
using namespace std;
int main()
{

    int n, sum = 0;
    char choice;
    do
    {
        cout << "Enter the number:" << endl;
        cin >> n;
        sum += n;
        cout << "The sum of the numbers entered so far is " << sum << endl;
        cout << "Wanna add another sum to the sum?\ny-Yes\nn-No\n";
        cin >> choice;
    } while (choice == 'y');
    cout << "The final sum is : " << sum << endl;
    return 0;
}