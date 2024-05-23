/*

****
*  *
*  *
****

i=0, n-1
j=0, n-1

outter loop= n

stars, spaces, stars


*/

#include<iostream>
using namespace std;

void solve(int n)
{

    for (int i =0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==0 || j==n-1 || i==0 || i==n-1)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
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



