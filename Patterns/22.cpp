/*

4444444
4333334
4322234
4321234
4322234
4333334
4444444





*/

#include<iostream>
using namespace std;

void solve(int n)
{
for(int i=0;i<2*n-1;i++)
        {
            for(int j=0;j<2*n-1;j++)
            {
                int top = i;
                int left = j;
                int right = (2*n - 2) - j;
                int bottom = (2*n - 2) - i;
                  cout<<(n- min(min(top,bottom), min(left,right)))<<" ";
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



