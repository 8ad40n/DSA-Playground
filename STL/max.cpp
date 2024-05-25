#include<bits/stdc++.h>
using namespace std;

void maxSolve()
{
    int n= 4;
    int a[n] = {3,2,1,10};

    int maxi = *max_element(a, a+n);
    // for vector, inner parameters same as sort 
    cout<<maxi;

}

int main()
{
    maxSolve();
}