#include <iostream>
#include <stack>

using namespace std;

void explainStack() // Follows LIFO
{

    stack<int> st; //{}
    st.push(1);    //{1}
    st.push(2);    //{1,2}
    st.push(3);    //{1,2,3}
    st.emplace(4); //{1,2,3,4}

    cout << st.top() << endl; // 4, the top() functions returns us the element at the top of the stack but note it doesn't remove that top element

    st.pop(); // pop() removes and returns the top element of the stack //{1,2,3}

    cout << st.top() << endl; // 3

    cout << st.size() << endl; // 3

    cout << st.empty() << endl; // false

    stack<int> s1, s2;
    s1.swap(s2);
}

int main()
{
    explainStack();
    return 0;
}