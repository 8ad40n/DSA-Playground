/*

ABCDE
ABCD
ABC
AB
A

*/

#include<iostream>
using namespace std;

void solve(int n)
{
    for (char i =1;i<=n;i++)
    {
        for (char j='A';j<='A'+(n-i);j++)
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



