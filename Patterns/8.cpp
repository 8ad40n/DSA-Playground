/*

********* 1-9 2n-(2i-1)
 *******  2-7 2n-(2i-1)
  *****   3-5 2n-(2i-1)
   ***    4-3 2n-(2i-1)
    *     5-1 2n-(2i-1)

2n-(2i-1)
space, stars, space
*/

#include<iostream>
using namespace std;

void solve(int n)
{
    
    for (int i =1;i<=n;i++)
    {
        //space
        for(int j=1;j<=i-1;j++)
        {
            cout<<" ";
        }
        //stars
        for(int j=1;j<=2*n-(2*i-1);j++)
        {
            cout<<"*";
        }
        //space
        for(int j=1;j<=i-1;j++)
        {
            cout<<" ";
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



