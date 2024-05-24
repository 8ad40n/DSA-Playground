#include<bits/stdc++.h>
using namespace std;

void multisetSolve()
{
    // same as set but stores duplicate element also

    multiset<int> s;
    s.insert(1); // 1
    s.insert(2); // 1 2
    s.insert(2); // 1 2 2

    int cnt = s.count(2); // Ans: 2 // will count the number of 2
    
}

int main()
{
    multisetSolve();
}