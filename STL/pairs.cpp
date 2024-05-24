// pair is a part of utility library


#include<bits/stdc++.h>
using namespace std;

void pairSolve()
{
    pair<int, int>p ={1,3}; // suppose i want to store couple of int
    cout<<p.first<<" "<<p.second<<endl;  // 1 3

    // Nested pair
    pair<int, pair<int, int>> p1 ={10,{20,30}};
    cout<<p1.first<<" "<<p1.second.first<<" "<< p1.second.second<<endl;  // 10 20 30

    // pair array
    pair<int, int> arr[]= { {1,2}, {1,3}, {1,4} };
    cout<<arr[0].second<<endl;  // 2
}

int main()
{
    pairSolve();
}