#include <iostream>
#include <deque>

using namespace std;

void explainDeQue()
{
    deque<int> dq;       //{}
    dq.push_back(2);     //{2}
    dq.emplace_back(3);  //{2,3}
    dq.push_front(1);    //{1,2,3}
    dq.emplace_front(0); //{0,1,2,3}

    dq.pop_back();  //{0,1,2}
    dq.pop_front(); //{1,2}
    dq.back();
    dq.front();

    // rest functions same as vector
    // begin,end,rbegin,rend,clear,empty,insert,size,swap
}

int main()
{
    explainDeQue();
    return 0;
}