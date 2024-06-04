#include<bits/stdc++.h>
using namespace std;

int bruteforce(vector<int> &a, int N)
{
    // O(n^2)
    // space: O(1)
    for (int i = 1; i <= N; i++) {
        // flag variable to check
        // if an element exists
        int flag = 0;
        //Search the element using linear search:
        for (int j = 0; j < N - 1; j++) {
            if (a[j] == i) {
                // i is present in the array:
                flag = 1;
                break;
            }
        }
        // check if the element is missing
        //i.e flag == 0:
        if (flag == 0) return i;
    }
    // The following line will never execute.
    // It is just to avoid warnings.
    return -1;
}

int better(vector<int> &a, int N)
{
    // O(N) + O(N) ~ O(2*N)
    // space:  O(N)

    int hash[N + 1] = {0}; //hash array
    // storing the frequencies:
    for (int i = 0; i < N - 1; i++)
        hash[a[i]]++;

    //checking the freqencies for numbers 1 to N:
    for (int i = 1; i <= N; i++) {
        if (hash[i] == 0) {
            return i;
        }
    }
    // The following line will never execute.
    // It is just to avoid warnings.
    return -1;
}


int optimalSum(vector<int> &a, int N)
{
    // O(N)
    // Space: O(1)

     //Summation of first N numbers:
    int sum = (N * (N + 1)) / 2;

    //Summation of all array elements:
    int s2 = 0;
    for (int i = 0; i < N - 1; i++) {
        s2 += a[i];
    }

    int missingNum = sum - s2;
    return missingNum;
}


int optimalXor(vector<int> &a, int N)
{
    int xorr=0;
    for(int i=1;i<a.size();i++)
    {
        xorr=xorr^a[i];
    }
    return xorr;
}



int main()
{
    int n=5;
    vector<int> arr = {1, 2, 4, 5};
    cout<<bruteforce(arr,n)<<endl;

    vector<int> arr1 = {1, 2, 4, 5};
    cout<<better(arr1,n)<<endl;

    vector<int> arr2 = {1, 2, 4, 5};
    cout<<optimalSum(arr2,n)<<endl;

    vector<int> arr3 = {1, 2, 4, 5};
    cout<<optimalXor(arr3,n)<<endl;
}