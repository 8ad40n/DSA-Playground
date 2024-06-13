#include<bits/stdc++.h>
using namespace std;


vector<int> bruteforce(int arr[], int n) {
    // O(N^2)
    vector<int> ans;
    
    for (int i = 0; i < n; i++) {
        bool leader = true;

        for (int j = i + 1; j < n; j++)
        if (arr[j] > arr[i]) {
            
            leader = false;
            break;
        }
        if (leader)
        ans.push_back(arr[i]);

    }
    
    return ans;
}


vector<int> optimal(int arr[], int n) {

    vector<int> ans;
    
    // Last element of an array is always a leader,
    // push into ans array.
    int max = arr[n - 1];
    ans.push_back(arr[n-1]);

    // Start checking from the end whether a number is greater
    // than max no. from right, hence leader.
    for (int i = n - 2; i >= 0; i--)
        if (arr[i] > max) {
        ans.push_back(arr[i]);
        max = arr[i];
    } 
    return ans;
}



int main() {

    int n = 6;
    int arr[n] = {10, 22, 12, 3, 0, 6};

    vector<int> ans = bruteforce(arr,n);
    
    for(int i = 0;i<ans.size();i++){
        
        cout<<ans[i]<<" ";
    }
    
    cout<<endl;



    int arr1[n] = {10, 22, 12, 3, 0, 6};

    vector<int> ans1 = optimal(arr1,n);
    
    
    for(int i = ans1.size()-1;i>=0;i--){
        
        cout<<ans1[i]<<" ";
    }
    
    cout<<endl;


    return 0;

}