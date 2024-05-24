#include<bits/stdc++.h>
using namespace std;

void setSolve()
{
    // Log(N)
    // store everything in sorted order and unique

    set<int> s;
    s.insert(1); // 1
    s.insert(2); // 1 2
    s.insert(2); // 1 2
    s.insert(4); // 1 2 4
    s.insert(3); // 1 2 3 4
    // functionality of insert in vector can also be applied

    // 1 2 3 4
    auto it = s.find(3); // will return an iterator which points to the 3

    auto it = s.find(6); // as it is not here so it will return s.end()

    s.erase(4); // 1 2 3 // takes logarithmic time

    int cnt = count(1); // if exists =1  else 0


    auto it = s.find(3);
    s.erase(it); // it takes constant time

    auto it1 = s.find(2);
    auto it2 = s.find(4);
    s.erase(it1,it2);  // 1 4

    
}

int main()
{
    setSolve();
}