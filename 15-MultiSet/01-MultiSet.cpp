#include <iostream>
#include <set>

using namespace std;

void explainMultiSet()
{
    // Everything is same as that of set but it only follows the ordered part not the unique part which means we can store multiple duplicate elements

    multiset<int> ms; //{}
    ms.insert(1);     //{1}
    ms.insert(1);     //{1,1}
    ms.insert(1);     //{1,1,1}

    ms.count(1); // returns 3 since there are 3 1's

    // But if we erase 1 then all the ones are erased :
    ms.erase(1);

    // If we want to delete only one 1 then we can pass the addres of the 1 or the pointer to the element 1

    auto it = ms.find(1);
    ms.erase(it); //{1,1} after erasing 1 one

    // we can also erase multiple 1's as:
    // {1,1,1,1}
    ms.erase(ms.find(1), ms.find(1) + 2); //{1,1}

    // rest all functions are same as set.
}

int main()
{
    explainMultiSet();
    return 0;
}
