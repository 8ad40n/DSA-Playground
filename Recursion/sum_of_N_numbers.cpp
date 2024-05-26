#include<bits/stdc++.h>
using namespace std;
void func(int n, int sum)
{ 
    if(n<1)
    {
        cout<<sum;
        return;
    }
    func(n-1,n+sum);
}

int funcc(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n+funcc(n-1);
}
int main()
{
    //n*(n+1)/2
    
    // parametarized way
    //func(5,0); // pass 0 as initial sum

    //functional way
    cout<<funcc(5);

    
    return 0;
}