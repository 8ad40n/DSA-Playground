#include<bits/stdc++.h>
using namespace std;
int reverse(int n)
{
    int rev=0;
    while (n!=0) 
    {
        int lastDigit=n%10;  
        n/=10; 
        rev=(rev*10)+lastDigit; 
    }
    return rev;
    

}
int main()
{
    int n;
  cout<<"Enter number:";
  cin>>n;
  int digit=reverse(n);
  cout<<"Reverse order:"<<digit;
    
    return 0;
}



