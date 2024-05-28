#include<bits/stdc++.h>
using namespace std;

void listSolve()
{
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(3);


    // insert in vector is costly.
    ls.push_front(10);
    ls.emplace_front(20);

    // rest functions are same as vector   
}

int main()
{
    listSolve();
    
}
