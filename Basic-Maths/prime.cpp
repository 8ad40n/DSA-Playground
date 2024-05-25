#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    // O(square root(n))
    int cnt=0;
    int a=sqrt(n);
    for(int i=1;i<=a;i++) 
    {
        if(n%i==0)
        {
            cnt=cnt+1;
            if((n/i)!=i)
            {
             cnt=cnt+1;
            }
        }
        
    }
    if(cnt==2)
    {
        return true;
    }
    else
    {
        return false;
    }
  
    

}
int main()
{
    int n;
    cout<<"enter number:";
    cin>>n;
    bool ans=prime(n);
    if(ans)
    {
        cout<<n<<" is prime number";
    }
    else
    {
         cout<<n<<" is not prime number";
    }
    return 0;
}