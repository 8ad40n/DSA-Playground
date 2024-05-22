/*

****
****
****
****

1. outter loop: count the rows

2. inner loop: focus on the cols and connect them somehow to the rows

3. print them inside the inner loop

4. Observe symmetry [optional]

*/

#include<iostream>
using namespace std;

void solve(int n)
{
    for (int i =0;i<n;i++)
    {
        for (int j=0;j<n;j++)
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



