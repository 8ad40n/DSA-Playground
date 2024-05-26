// 0 1 1 2 3 5 8 .......

#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if(n<=1)
    {
        return n;
    }
   int last= fibo(n-1);
   int sfirst= fibo(n-2);
   return last+sfirst;
}
int main()
{
    cout<<fibo(6);
    
    return 0;
}