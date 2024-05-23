/*

1      1    1-6-1
12    21    2-4-2
123  321    3-2-3
12344321    4-0-4

number, space, number
space= 2n-2
then space-=2

*/

#include<iostream>
using namespace std;

void solve(int n)
{
    int space= 2*n-2;

    for (int i =1;i<=n;i++)
    {
        //number
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }

         //space
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }

         //number
        for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
        space-=2;

        cout<< endl;
    }
}

int main()
{
    int n;
    cin>>n;
    solve(n);
}



