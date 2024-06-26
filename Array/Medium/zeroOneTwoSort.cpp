#include<bits/stdc++.h>
using namespace std;


void better(vector<int> &arr, int n) {
    // O(N) + O(N)
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) cnt0++;
        else if (arr[i] == 1) cnt1++;
        else cnt2++;
    }
    //Replace the places in the original array:
    for (int i = 0; i < cnt0; i++) arr[i] = 0; // replacing 0's

    for (int i = cnt0; i < cnt0 + cnt1; i++) arr[i] = 1; // replacing 1's

    for (int i = cnt0 + cnt1; i < n; i++) arr[i] = 2; // replacing 2's
}


// Dutch National Flag Algorithm
void optimal(vector<int> &arr, int n) {
    // O(N)
    int low = 0, mid = 0, high = n - 1; // 3 pointers

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}



int main()
{
    int n = 6;
    vector<int> arr = {0,2,1,2,0,1};
    
    better(arr,n);
    for(auto it: arr)
    {
        cout<<it<<" ";
    }
    cout<< endl;

    vector<int> arr1 = {0,2,1,2,0,1};
    optimal(arr1,n);
    for(auto it: arr1)
    {
        cout<<it<<" ";
    }
    cout<< endl;

    

}