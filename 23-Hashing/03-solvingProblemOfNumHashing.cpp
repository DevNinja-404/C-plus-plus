#include <iostream>
#include <map>
#include <unordered_map>

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
    // map<int,int>mp
    unordered_map<int, int> mp; // if the element in the array is very large like 10^9 for example then we can define the datatype of the key as long and datatype of the value will be int cause its the frequency which generally would not be as large as 10^9.

    // Remember that the map stores all the values in sorted order and unordered_map stores all the elements in the random order
    for (int i = 0; i < num; i++)
    {
        mp[arr[i]]++;
    }
    // so {{1->2},{2->2},{3->2},{12->1}} is how our map will look like i.e {1->2} is at the first place,{2->2} will be at the second and so on...

    // To visuale above:
    for (auto it : mp)
    {
        cout << "key : " << it.first << " value : " << it.second << endl;
    }

    // if we try to access the the value of the key which is not present in the map then we get 0 as return but remember it is not storing that key and value of that key as 0.

    // We can also do PreStoring while we r takinf the input which does reduces one loop because from 2N->N but time complexity in the bigger picture is still the same.so doing this doesn't make our code that much faster

    while (querySize--)
    {
        cout << "Enter the query : " << endl;
        cin >> query;
        // Fetching:
        cout << query << " has repeated in the array for " << mp[query] << " times " << endl;
    }
    return 0;
}

// Map can also be used for the string hashing well the key will be the char(characters of the string) and the value will be int(frequency)

// map<char,int>m1;

// Time Complexity:
// The total time complexity will be O(N * time taken by map data structure).
// Storing(i.e. insertion) and fetching(i.e. retrieval) in a C++ map, both take always O(logN) time complexity for the best,average and worst case, where N = the size of the map.

// But the unordered_map in C++ and HashMap in Java, both take O(1) time complexity to perform storing(i.e. insertion) and fetching(i.e. retrieval). Now, it is valid for the best case and the average case.
// For the worst case,it ends up taking O(N) time complexity because of the collision where N is no. of elements in the array.BUt it happens very very rarely.

// Look ur DSA copy for in detail explanation