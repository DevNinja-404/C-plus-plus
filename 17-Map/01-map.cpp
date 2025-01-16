#include <iostream>
#include <map>

using namespace std;

void explainMap()
{
    // map is a container which stores data in key-value pair and keys are unique but the values can be same for unique keys and also the the data is sorted as per the key.
    // key and value can be of any datatype int,char,double,pai,etc.

    map<int, int> mp1;  // {}
    mp1[1] = 2;         //{{1,2}}
    mp1.emplace(3, 4);  //{{1,2},{3,4}}
    mp1.insert({2, 3}); //{{1,2},{2,3},{3,4}}

    // map with a pair as key:
    // map<pair<int, int>, int> mp2;
    // mp2[{2, 3}] = 10; //{{{2,3},10}}
    // mp2[{3, 4}] = 20; //{{{2,3},10},{{3,4},20}}

    // Printing a map:
    for (auto it : mp1)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << mp1[1] << endl; // returns the value of the key 1 i.e. 2
    cout << mp1[5] << endl; // if map doesn't have the specified key returns 0

    auto it = mp1.find(2); // searches for the key 2
    cout << "key = " << (*(it)).first << " value= " << (*(it)).second << endl;

    auto it = mp1.find(5); // if map doesn't have the specified key,it points to mp1.end() i.e. to the location right after the last element of map

    auto it = mp1.lower_bound(1);
    auto it = mp1.upper_bound(2);

    // erase,swap,size,empty,etc. are all same
}

int main()
{
    explainMap();
    return 0;
}
