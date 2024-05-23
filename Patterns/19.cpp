/*

**********    0-> 5 0 5
****  ****    1-> 4 2 4
***    ***    2-> 3 4 3
**      **    3-> 2 6 2
*        *    4-> 1 8 1
*        *
**      **
***    ***
****  ****
**********


stars, spaces, stars

stars= n-i
spaces= 0+2+.....

*/

#include<iostream>
using namespace std;

void solve(int n)
{
    int space = 0;
    for (int i =0;i<n;i++)
    {
        // stars
        for (int j =1;j<=n-i;j++)
        {
            cout<<"*";
        }

        // spaces
        for (int j =0;j<space;j++)
        {
            cout<<" ";
        }

        // stars
        for (int j =1;j<=n-i;j++)
        {
            cout<<"*";
        }
        space+=2;

        cout<<endl;
    }


    int space2 = 8;
    for (int i =1;i<=n;i++)
    {
        // stars
        for (int j =1;j<=i;j++)
        {
            cout<<"*";
        }

        // spaces
        for (int j =0;j<space2;j++)
        {
            cout<<" ";
        }

        // stars
        for (int j =1;j<=i;j++)
        {
            cout<<"*";
        }
        space2-=2;

        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    solve(n);
}



