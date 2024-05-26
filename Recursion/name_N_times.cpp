// A function which calls itself
// Base case: Set a condition= No more recusion
// Stack overflow | Stack space: Remaining non-executive function
// Recusion tree: function calls someone, that calls someone ......

#include<bits/stdc++.h>
using namespace std;

void solve(int i, int n)
{
    if(i>n) // Base condition
    {
        return;
    }
    else{
        cout<< "Joy"<<endl;
        solve(i+1,n);
    }
}

int main()
{
    int n;
    cin>>n;

    solve(1,n);
}