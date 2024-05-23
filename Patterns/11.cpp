/*

1
01
101
0101
10101

*/

#include<iostream>
using namespace std;

void solve(int n)
{
    int start = 1;

    for (int i =1;i<=n;i++)
    {
        if(i%2==0) start=0;
        else start=1;

        for(int j=1;j<=i;j++)
        {
            cout<<start;
            start= 1-start;
        }

        cout<< endl;
    }
}

int main()
{
    int n;
    cin>>n;
    solve(n);
}



