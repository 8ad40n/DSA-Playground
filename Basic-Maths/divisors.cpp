#include<bits/stdc++.h>
using namespace std;
void divisors(int n)
{
    // O(n)
    cout<<"Divisors of "<<n<<": ";
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    } 
}
vector<int> factors(int n)
{
    // O(square root(n))
    vector<int>div;
    int a=sqrt(n);
    for(int i=1;i<=a;i++)
    {
        if(n%i==0)
        {
            div.push_back(i);
        
            if(i!=n/i)
            {
            div.push_back(n/i);
            }
        }
    }
    sort(div.begin(),div.end());
   
    return div;
}
int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;
    //brute force
    //divisors(n);
    
    //optimal
    vector<int>div=factors(n);
    for(auto i:div)
    {
        cout<<i<<" ";
    }

    
        
    return 0;
}