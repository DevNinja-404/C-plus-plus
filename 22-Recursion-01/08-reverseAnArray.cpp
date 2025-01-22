// SO here we understand the concept of backtracking...

#include <iostream>
#include <vector>

using namespace std;

// Recursion using two pointers:
// void reverseArray(int l, int r, vector<int> &v) // pass by reference
// {
//     if (l >= r)
//     {
//         cout << "The reverse of the array is :" << endl;
//         for (auto it : v)
//         {
//             cout << it << " ";
//         }
//         return;
//     }

//     swap(v[l], v[r]);
//     reverseArray(l + 1, r - 1, v);
// }

// Recursion using only one pointer:
void reverseArray(int i, vector<int> &v) // pass by reference but if we had used array even if we do pass by value,array are always passed by refrence since the pointer to the first element of the array is passed to the function
{
    if (i >= v.size() / 2)
    {
        cout << "The reverse of the array is :" << endl;
        for (auto it : v)
        {
            cout << it << " ";
        }
        return;
    }
    swap(v[i], v[v.size() - i - 1]);
    reverseArray(i + 1, v);
}

int main()
{
    vector<int> v;
    int num;
    char ch = 'n';
    cout << "Enter the elements in the array:" << endl;
    do
    {
        cin >> num;
        v.emplace_back(num);
        cout << "Add next element?\ny-Yes\nn-NO" << endl;
        cin >> ch;
    } while (ch == 'y');
    reverseArray(0, v);
    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}