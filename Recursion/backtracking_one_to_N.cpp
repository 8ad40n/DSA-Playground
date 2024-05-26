
#include<bits/stdc++.h>
using namespace std;

void solve(int i, int n)
{
    if(i<1) // Base condition
    {
        return;
    }
    else{
        solve(i-1,n);
        cout<< i<<endl;
    }
}

int main()
{
    int n;
    cin>>n;

    solve(n,n);
}