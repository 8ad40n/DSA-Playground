#include<bits/stdc++.h>
using namespace std;

void sortSolve()
{
    // for vector
    // sort(v.begin(),v.end());
    

    // for array
    int n=5;
    int a[n]={1,2,5,3,4};
    sort(a,a+n); // 1 2 3 4 5
    
    sort(a+2,a+4); // 1 2 (3 5) 4

    // in decending order:
    sort(a,a+n, greater<int>); // 5 4 3 2 1


}

int main()
{
    sortSolve();
}