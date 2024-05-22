/*

rows= 5
outter loop: 2n-1

*       1-1
**      2-2
***     3-3
****    4-4
*****   5-5
****    6-4--2*n-i
***     7-3--2*n-i
**      8-2--2*n-i
*       9-1--2*n-i

*/

#include<iostream>
using namespace std;

void solve(int n)
{
    for (int i =1;i<=2*n-1;i++)
    {
        int star =i;
        if(i>n)
        {
            star= 2*n-i;
        }

        for (int j=1;j<=star;j++)
        {
            cout<<"* ";
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



