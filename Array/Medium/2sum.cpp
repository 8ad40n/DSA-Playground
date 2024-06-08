#include<bits/stdc++.h>
using namespace std;

vector<int> bruteforce(int n, vector<int> &arr, int target) {
    // O(n^2)
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return { -1, -1};
}

vector<int> better(int n, vector<int> &arr, int target) {
    // O(n)
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int moreNeeded = target - num;
        if (mpp.find(moreNeeded) != mpp.end()) {
            return {mpp[moreNeeded], i};
        }
        mpp[num] = i;
    }
    return { -1, -1};
}


string optimal(int n, vector<int> &arr, int target) {
    // O(N) + O(N*logN)
    sort(arr.begin(), arr.end());
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return "YES";
        }
        else if (sum < target) left++;
        else right--;
    }
    return "NO";
}



int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14; 
    
    vector<int> ans= bruteforce(n,arr,target);
    cout<< ans[0]<<" "<<ans[1]<<endl;

    vector<int> arr1 = {2, 6, 5, 8, 11};
    vector<int> ans1= bruteforce(n,arr1,target);
    cout<< ans1[0]<<" "<<ans1[1]<<endl;

    vector<int> arr2 = {2, 6, 5, 8, 11};
    cout<<optimal(n,arr,target)<<endl;

    

}