#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
    {
        return true;
    }
    else if (p1.second > p2.second)
    {
        return false;
    }
    else
    {
        if (p1.first > p2.first)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

void explainExtra()
{
    // if we are asked to sort an array or vector we don't have to write sorting algorith ,c++ STL provides us the sort method as sort(starting address,ending address)
    // sort(a, a + n); // a[]={1,5,3,2} => {1,2,3,5}

    // // for vector:
    // sort(v.begin(), v.end());

    // // for soorting only a certain portion :
    // sort(a + 2, a + 4); // a[]={1,5,3,2} => {1,5,2,3}

    // // for sorting in descending order:
    // sort(a, a + n, greater<int>);
    // // so we can sort in ascending or descending order

    // Now suppose we have an array of pairs as:
    pair<int, int> a[] = {{1, 2},
                          {2, 1},
                          {4, 1}};

    int n = sizeof(a) / sizeof(a[0]);
    // The question is to sort the above array of pair as:
    // sort in ascending order as per the second element of each par but if the second elemnts are same then sort that as per the first element in the descending order

    sort(a, a + n, comp); //{{4,1},{2,1},{1,2}}

    for (auto it : a)
    {
        cout << it.first << " " << it.second << endl;
    }

    return;
}

int main()
{

    explainExtra();
    return 0;
}