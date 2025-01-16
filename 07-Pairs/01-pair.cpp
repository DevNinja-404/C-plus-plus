#include <iostream>
#include <utility>

using namespace std;

void explainPair()
{
    pair<int, int> p = {1, 3};                  // the p stors the two int as pair
    cout << p.first << " " << p.second << endl; // p.first to access the first elememt of pair and p.second for the second element

    // We can nest a pair inside the pair: (The first element of a pair can be a pair itself)
    pair<int, pair<int, int>> p1 = {1,
                                    {2, 3}};

    cout << p1.first << " " << p1.second.second << " " << p1.second.first << endl;

    // We can also make an array of pair
    pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}}; // we need to specify the datatype of both elements inside each pair of the array of pairs.
    cout << arr[1].second << endl;
}

int main()
{
    explainPair();
    return 0;
}