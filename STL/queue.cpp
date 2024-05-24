#include<bits/stdc++.h>
using namespace std;

void queueSolve()
{
    // FIFO
    queue<int> s;
    s.push(1); // 1
    s.push(2); // 1 2
    s.emplace(3); // 1 2 3

    s.pop(); // 2 3

    cout<<s.front()<<endl;  // 2
    cout<<s.back()<<endl; // 3

    s.back() +=5;
    cout<<s.back()<<endl; // 8

}

int main()
{
    queueSolve();
}