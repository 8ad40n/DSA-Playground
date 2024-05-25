
#include<bits/stdc++.h>
using namespace std;
int count(int n)
{
    //brute force approach
    int cnt=0;
    // while (n>0)
    // {
    //     cnt++;
    //     n/=10;
    //     //time complexity: O(log10(n))
    // }
    
    //optimal approach
    cnt=(int)log10(n)+1; // time complexity: O(1)
    return cnt;
    //space complexity for bath case is O(1)
    

}
int main()
{
  int n;
  cout<<"Enter number:";
  cin>>n;
  int digit=count(n);
  cout<<"Digit:"<<digit;
    
    return 0;
}