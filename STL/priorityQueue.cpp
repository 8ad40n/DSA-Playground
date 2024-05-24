#include<bits/stdc++.h>
using namespace std;

void priorityQueueSolve()
{
    // Similar to queue but maximum element stays at the top
    priority_queue<int> s;
    s.push(5); // 5
    s.push(2); // 5 2
    s.push(8); // 8 5 2
    s.emplace(10); // 10 8 5 2

    s.pop(); // 8 5 2

    cout<<s.top()<<endl;  // 8
    

    // if i want the minimum elements at the top:
    priority_queue<int, vector<int>, greater<int>>pq;
    pq.push(5); // 5
    pq.push(2); // 2 5 
    pq.push(8); // 2 5 8 
    pq.emplace(10); // 2 5 8 10

    pq.pop(); // 5 8 10

    cout<<pq.top()<<endl;  // 5
}

int main()
{
    priorityQueueSolve();
}