#include <iostream>
#include <list>
using namespace std;

// For a list a doubly linked list is maintained and for a vector a single linked list is maintained
void explainList()
{
    list<int> ls;       //{}
    ls.push_back(2);    // {2}
    ls.emplace_back(4); //{2,4}

    ls.push_front(5); //{5,2,4} //had it been a vector we had to use insert and insert is a more time consuming operation than push_front in list

    ls.emplace_front(6); //{6,5,2,4}

    // rest all functions are same as that of vector
    // begin,end,rbegin,rend,insert,clear,size,swap,empty
}

int main()
{
    explainList();
    return 0;
}
