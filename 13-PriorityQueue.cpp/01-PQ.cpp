#include <iostream>
#include <queue>

using namespace std;

void explainPQ()
{
    // Maximum Heap:
    priority_queue<int> pq; // Largest element will be at the top just for understanding, actually it maintains tree data structure
    pq.push(5);             //{5}
    pq.push(2);             //{5,2}
    pq.push(8);             //{8,5,2}
    pq.emplace(10);         //{10,8,5,2}

    cout << pq.top() << endl; // prints 10;
    pq.pop();                 //{8,5,2}

    cout << pq.top() << endl; // prints 8

    // size swap empty are all same as others

    // Minimum Heap:
    priority_queue<int, vector<int>, greater<int>> pq; // stores the minimum element at the top
    pq.push(5);                                        //{5}
    pq.push(2);                                        //{2,5}
    pq.emplace(8);                                     //{2,5,8}
    pq.emplace(10);                                    //{2,5,8,10}

    cout << pq.top() << endl; //prints 2
}

int main()
{
    explainPQ();
    return 0;
}
