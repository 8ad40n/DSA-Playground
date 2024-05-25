#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int x) {
        if(x<0)
        {
            return false;

        }
        else{
            long long reversed = 0;
            long long temp = x;

            while (temp != 0) {
                int digit = temp % 10;
                reversed = reversed * 10 + digit;
                temp /= 10;
            }

            return (reversed == x);
        }
    }
int main()
{
    int n;
  cout<<"Enter number:";
  cin>>n;
  int digit=isPalindrome(n);
  cout<<digit;
    
    return 0;
}



