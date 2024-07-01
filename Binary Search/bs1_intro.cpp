
#include <bits/stdc++.h>
using namespace std;


// iterative approach
int iterative(vector<int>& nums, int target) {
    // O(logN)
    int n = nums.size(); //size of the array
    int low = 0, high = n - 1;

    // Perform the steps:
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) return mid;
        else if (target > nums[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}


// recursive approach
int binarySearch(vector<int>& nums, int low, int high, int target) {
    //  O(logN)
    
    if (low > high) return -1; //Base case.

    // Perform the steps:
    int mid = (low + high) / 2;
    if (nums[mid] == target) return mid;
    else if (target > nums[mid])
        return binarySearch(nums, mid + 1, high, target);
    return binarySearch(nums, low, mid - 1, target);
}

int recursive(vector<int>& nums, int target) {
    return binarySearch(nums, 0, nums.size() - 1, target);
}




int main()
{
    vector<int> a = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 6;
    int ind = iterative(a, target);
    if (ind == -1) cout << "The target is not present." << endl;
    else cout << "The target is at index: "<< ind << endl;


    vector<int> a1 = {3, 4, 6, 7, 9, 12, 16, 17};
    int target1 = 6;
    int ind1 = recursive(a1, target1);
    if (ind1 == -1) cout << "The target is not present." << endl;
    else cout << "The target is at index: "<< ind1 << endl;
    return 0;
}


