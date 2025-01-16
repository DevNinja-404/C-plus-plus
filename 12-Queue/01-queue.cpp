#include <iostream>
#include <queue>
using namespace std;

void explainQueue() // follows FIFO
{
    queue<int> q; //{}
    q.push(1);    //{1}
    q.push(2);    //{1,2}
    q.emplace(3); //{1,2,3}

    q.back() += 3;            // 3+3=6
    cout << q.back() << endl; // prints 6

    cout << q.front() << endl; // prints 1

    q.pop(); // removes the first element {2,3}

    cout << q.front() << endl; // prints 2

    // size,swap,empty are same as that of stack
}

int main()
{
    explainQueue();
    return 0;
}