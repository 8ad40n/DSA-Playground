/*

    *
   ***
  *****
 *******
*********
*********
 *******  
  *****   
   ***    
    * 

combination of 7 and 8 no pattern
*/

#include<iostream>
using namespace std;

void solve1(int n)
{
    
    for (int i =1;i<=n;i++)
    {
        //space
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        //stars
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        //space
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}

void solve2(int n)
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
    solve1(n);
    solve2(n);
}



