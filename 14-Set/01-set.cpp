#include <iostream>
#include <set>

using namespace std;

void explainSet()
{                  // A tree is maintained for set
    set<int> st;   //{}
    st.insert(1);  //{1}
    st.emplace(2); //{1,2}
    st.insert(2);  //{1,2} 2 is not inserted again because set maintains unique elements only

    st.insert(4); //{1,2,4}
    st.insert(3); //{1,2,3,4} the elements are stored in a sorted manner

    // Insert can also be used in the similar manner as we used in vector.
    // begin(),end(),rbegin(),rend(),size() ,empty() ,swap() can all be used..

    // {1,2,3,4,5}
    auto it = st.find(3); // returns the pointer to the memory location of 3

    // {1,2,3,4,5}
    auto it = st.find(6); // if the element for the search is not in the set then the pointer to the memory location right after the last element of the set is returned

    // {1,2,3,4,5}
    st.erase(5); // 5 is erased from the set //takes logarithmic time //{1,2,3,4}

    int count = st.count(1); // if 1 is in the set ,count will be 1 because set is unique and if 1 is not in the set then the vallue of count will be 0

    auto it = st.find(3);
    st.erase(it); // it takes constant time if we provide iterator or pointer of the element we want to delete

    // {1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);

    st.erase(it1, it2); //{1,4,5}  //[first,last)

    // lower_bound and upper_bound

    // lower_bound is a function which returns the pointer to the first occurence of the element if it occurs,if not returns the pointer to the element which is the immediate next greater of the given element.If the element passed is itself the greatest ,then the pointer to next to the last element of the data structure is returned
    // To find the index we subtract the pointer to the first element from the iterator returned by the lower_bound() function

    // upper_bound is a function which returns the pointer to the element which is the immediate next grreater of the given number.IF the passed no. itself is the greatest,then the pointer to next to the last element of the data structure is returned
    // To find the index we subtract the pointer to the first element from the iterator returned by the upper_bound() function

    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);
}

int main()
{
    explainSet();
    return 0;
}