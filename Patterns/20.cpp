/*

*        *   1-8-1
**      **   2-6-2
***    ***   3-4-3
****  ****   4-2-4
**********   5-0-5
****  ****   after that space+=2
***    ***
**      **
*        *

n=5
outter loop = 2n-1



stars, spaces, stars


*/

#include<iostream>
using namespace std;

void solve(int n)
{
    int space = 2*n-2;
    for (int i =1;i<=2*n-1;i++)
    {
        // stars
        int star=i;
        if(i>n) star=2*n-i;

        for (int j =1;j<=star;j++)
        {
            cout<<"*";
        }

        // spaces
        for(int j =1;j<=space;j++)
        {
            cout<< " ";
        }

        // stars
        for (int j =1;j<=star;j++)
        {
            cout<<"*";
        }


        cout<<endl;
        if(i<n) space-=2;
        else space+=2;
    }

}

int main()
{
    int n;
    cin>>n;
    solve(n);
}



