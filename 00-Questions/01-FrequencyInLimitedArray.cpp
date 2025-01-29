// You are given an array arr[] containing positive integers. The elements in the array arr[] range from 1 to n (where n is the size of the array), and some numbers may be repeated or absent. Your task is to count the frequency of all numbers in the range 1 to n and return an array of size n such that result[i] represents the frequency of the number i (1-based indexing).

// Input: arr[] = [2, 3, 2, 3, 5]
// Output: [0, 2, 2, 0, 1]
// Explanation: We have: 1 occurring 0 times, 2 occurring 2 times, 3 occurring 2 times, 4 occurring 0 times, and 5 occurring 1 time.

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> frequencyCount(vector<int> &arr)
{
    int size = arr.size();
    unordered_map<int, int> m;
    vector<int> v(size, 0);

    // Making a map to store the number as key and the frequency of the number as the value.
    for (int i = 0; i < size; i++)
    {
        m[arr[i]]++;
    }

    // Iterating over the map and returning the array such that it contains the frequency of the number.
    for (auto it : m)
    {
        v[it.first - 1] = it.second;
    }

    return v;
}

int main()
{
    vector<int> arr = {2, 3, 2, 3, 5};
    vector<int> res(frequencyCount(arr));
    for (auto it : res)
    {
        cout << it << " ";
    }
    return 0;
}

// Don't we need to make the size one more than the original size to achieve 1 based indexing as the question demands but this ans is accepted since they are not accessing each frequency using res[number], they r just iterating over res and printing the output.
// Maybe i am wrong.The doubt remains though...