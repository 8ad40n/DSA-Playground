
#include<bits/stdc++.h>
using namespace std;

void solve(int i, int n)
{
    if(i>n) // Base condition
    {
        return;
    }
    else{
        cout<< i<<endl;
        solve(i+1,n);
    }
}

int main()
{
    int n;
    cin>>n;

    solve(1,n);
}