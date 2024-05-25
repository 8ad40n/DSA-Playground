#include<bits/stdc++.h>
using namespace std;

void unorderSetSolve()
{
    // everything is same as set but stores in unorder
    // lower and upper bound function does not work

    unorder_set<int> s;
    s.insert(1); // 1
    s.insert(2); // 1 2
    s.insert(2); // 1 2
    s.insert(4); // 1 2 4
    s.insert(3); // 1 2 4 3

    
}

int main()
{
    unorderSetSolve();
}