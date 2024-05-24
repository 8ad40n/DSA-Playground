#include<bits/stdc++.h>
using namespace std;

void stackSolve()
{
    // LIFO
    stack<int> s;
    s.push(1); // 1
    s.push(2); // 2 1
    s.emplace(3); // 3 2 1

    s.pop(); // 2 1

    cout<<s.top()<<endl;  // 2
    cout<<s.size()<<endl; // 2
    cout<<s.empty()<<endl; // False

}

int main()
{
    stackSolve();
}