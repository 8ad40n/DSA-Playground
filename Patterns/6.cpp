/*

12345
1234
123
12
1

*/

#include<iostream>
using namespace std;

void solve(int n)
{
    for (int i =1;i<=n;i++)
    {
        for (int j=1;j<=n-i+1;j++)
        {
            cout<<j<<" ";
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



