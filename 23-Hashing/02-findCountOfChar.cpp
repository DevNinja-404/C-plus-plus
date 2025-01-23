#include <iostream>

using namespace std;

int main()
{
    string str;
    int querySize;
    char query;
    cout << "Enter the string:" << endl;
    cin >> str;
    cout << "Enter the no. of queries: " << endl;
    cin >> querySize;

    // PreStoring:
    int hashArr[26] = {0}; // Assuming the string only contains the lowercase letters
    for (int i = 0; i < str.size(); i++)
    {
        hashArr[str[i] - 'a']++;
    }

    while (querySize--)
    {
        cout << "Enter the query : " << endl;
        cin >> query;
        // Fetching:
        cout << query << " has repeated in the array for " << hashArr[query - 'a'] << " times " << endl;
    }

    return 0;
}
