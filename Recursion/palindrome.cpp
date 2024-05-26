#include<bits/stdc++.h>
using namespace std;
bool palindrome(int i,string s)
{
    int a=s.length();
    if(i>=a/2)return true;
    if(s[i]!=s[a-i-1])return false;
    return palindrome(i+1,s);

}
int main()
{
    string s = "madam"; 
	cout<<palindrome(0,s);
	cout<<endl;
    
    return 0;
}