
#include<bits/stdc++.h>
using namespace std;

void solve(int i, int n)
{
    if(n<1) // Base condition
    {
        return;
    }
    else{
        cout<< n<<endl;
        solve(i,n-1);
    }
}

int main()
{
    int n;
    cin>>n;

    solve(1,n);
}