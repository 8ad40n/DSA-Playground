#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int num) {
    
    int k = to_string(num).length();
    int sum = 0;
    int n = num;
    while(n > 0){
    
        int ld = n % 10;
        sum += pow(ld, k); 
        n = n / 10;
    }
    return sum == num ? true : false;
}

int main()
{
  int n;
  cout<<"Enter number:";
  cin>>n;
  bool ans=isArmstrong(n);
  if(ans== true)
  cout<<n<<" is armstrong";
  else
  {
    cout<<n<<" is not armstrong";
  }
  
    
    return 0;
}