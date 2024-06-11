#include<bits/stdc++.h>
using namespace std;

vector<int> bruteforce(vector<int>A, int n){
    // O(N+N/2)
  vector<int> pos;
  vector<int> neg;
  
  for(int i=0;i<n;i++){
      
      if(A[i]>0) pos.push_back(A[i]);
      else neg.push_back(A[i]);
  }
  
  for(int i=0;i<n/2;i++){
      
      A[2*i] = pos[i];
      A[2*i+1] = neg[i];
  }
  
  
  return A;
    
}

vector<int> optimal(vector<int>A){
//   O(n)
  int n = A.size();
  
  vector<int> ans(n,0);
  
  int posIndex = 0, negIndex = 1;
  for(int i = 0;i<n;i++){
      if(A[i]<0){
          ans[negIndex] = A[i];
          negIndex+=2;
      }      
      else{
          ans[posIndex] = A[i];
          posIndex+=2;
      }
  }
  return ans;
    
}


 vector<int> followUpQue(vector<int>A, int n){
    
  vector<int> pos;
  vector<int> neg;
  
  for(int i=0;i<n;i++){
      
      if(A[i]>0) pos.push_back(A[i]);
      else neg.push_back(A[i]);
  }
  
  if(pos.size() < neg.size()){
      
    // First, fill array alternatively till the point 
    // where positives and negatives ar equal in number.
    for(int i=0;i<pos.size();i++){
      
      A[2*i] = pos[i];
      A[2*i+1] = neg[i];
    }
    
    // Fill the remaining negatives at the end of the array.
    int index = pos.size()*2;
    for(int i = pos.size();i<neg.size();i++){
        
        A[index] = neg[i];
        index++;
    }
  }
  
  // If negatives are lesser than the positives.
  else{
      
      // First, fill array alternatively till the point 
      // where positives and negatives ar equal in number.
      for(int i=0;i<neg.size();i++){
      
      A[2*i] = pos[i];
      A[2*i+1] = neg[i];
  }
    
    // Fill the remaining positives at the end of the array.
    int index = neg.size()*2;
    for(int i = neg.size();i<pos.size();i++){
        
        A[index] = pos[i];
        index++;
    }
  }
  return A;
    
}


int main() {
    
  int n = 4;
  vector<int> A {1,2,-4,-5};

  vector<int> ans = bruteforce(A,n);
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }
  cout<<endl;


  vector<int> A1 = {1,2,-4,-5};
  vector<int> ans1 = optimal(A1);
  for (int i = 0; i < ans1.size(); i++) {
    cout << ans1[i] << " ";
  }
  cout<<endl;


  int n2 = 6;
  vector<int> A2 {1,2,-4,-5,3,4};

  vector<int> ans2 = followUpQue(A2,n2);
  
  for (int i = 0; i < ans2.size(); i++) {
    cout << ans2[i] << " ";
  }
  cout<<endl;

  return 0;
}