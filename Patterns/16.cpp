/*

A
BB
CCC
DDDD
EEEEE

*/

#include<iostream>
using namespace std;

void solve(int n)
{
    for (char i =1;i<=n;i++)
    {
        char ch= 'A'+i-1;

        for (int j=1;j<=i;j++)
        {
            cout<<ch;
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



