#include<bits/stdc++.h>
using namespace std;

int bruteforce(vector<int> &arr)
{
    // O(n^2)
    // space: O(1)
    int n = arr.size();

    //Run a loop for selecting elements:
    for (int i = 0; i < n; i++) {
        int num = arr[i]; // selected element
        int cnt = 0;

        //find the occurrence using linear search:
        for (int j = 0; j < n; j++) {
            if (arr[j] == num)
                cnt++;
        }

        // if the occurrence is 1 return ans:
        if (cnt == 1) return num;
    }

    //This line will never execute
    //if the array contains a single element.
    return -1;
}

int better(vector<int> &arr)
{
    // O(N)+O(N)+O(N)
    // space:  O(maxElement+1)

    //size of the array:
    int n = arr.size();

    // Find the maximum element:
    int maxi = arr[0];
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, arr[i]);
    }

    // Declare hash array of size maxi+1
    // And hash the given array:
    vector<int> hash(maxi + 1, 0);
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    //Find the single element and return the answer:
    for (int i = 0; i < n; i++) {
        if (hash[arr[i]] == 1)
            return arr[i];
    }

    //This line will never execute
    //if the array contains a single element.
    return -1;
    
}

int better2(vector<int> &arr)
{

    //size of the array:
    int n = arr.size();

    // Declare the hashmap.
    // And hash the given array:
    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }
    //Find the single element and return the answer:
    for (auto it : mpp) {
        if (it.second == 1)
            return it.first;
    }
    //This line will never execute
    //if the array contains a single element.
    return -1;
}


int optimalXor(vector<int> &arr)
{
    // {1,2,1,2,4};
    
    //size of the array:
    int n = arr.size();

    // XOR all the elements:
    int xorr = 0;
    for (int i = 0; i < n; i++) {
        xorr = xorr ^ arr[i];
    }
    return xorr;
}



int main()
{
    
    vector<int> arr = {4,1,2,1,2};
    cout<<bruteforce(arr)<<endl;

    vector<int> arr1 = {4,1,2,1,2};
    cout<<better(arr1)<<endl;

    vector<int> arr2 = {4,1,2,1,2};
    cout<<better2(arr2)<<endl;

    vector<int> arr3 = {4,1,2,1,2};
    cout<<optimalXor(arr3)<<endl;
}