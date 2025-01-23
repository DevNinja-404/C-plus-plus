#include <iostream>

using namespace std;

int main()
{
    int num, querySize, query;
    cout << "Enter the no. of elements in the array:" << endl;
    cin >> num;
    int arr[num];
    cout << "Enter those elements:" << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the no. of queries: " << endl;
    cin >> querySize;

    // PreStoring:
    int hashArr[13] = {0}; // Assuming the maximum element of the array is 12
    for (int i = 0; i < num; i++)
    {
        hashArr[arr[i]]++;
    }

    while (querySize--)
    {
        cout << "Enter the query : " << endl;
        cin >> query;
        // Fetching:
        cout << query << " has repeated in the array for " << hashArr[query] << " times " << endl;
    }

    return 0;
}
