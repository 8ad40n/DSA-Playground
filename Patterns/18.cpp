/*

E
DE
CDE
BCDE
ABCDE

*/

#include<iostream>
using namespace std;

void solve(int n)
{

    for (int i =1;i<=n;i++)
    {
        for (char j='E'-i+1;j<='E';j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    solve(n);
}



