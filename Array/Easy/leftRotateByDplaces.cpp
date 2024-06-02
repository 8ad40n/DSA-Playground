#include<bits/stdc++.h>
using namespace std;

// 1 2 3 4 5 6 7 , k=3
// 4 5 6 7 1 2 3 after rotating

void leftRotateDPlace(int arr[], int n, int k)
{
    // O(d) + O(n-d) + O(d) = O(n+d)

    int d = k % n;
    int temp[d];
    // storing first kth element in temp array
    for(int i=0;i<d;i++)
    {
        temp[i]=arr[i];
    }

    // roataing 
    for(int i=d;i<n;i++)
    {
        arr[i-d]=arr[i];
    }

    int j=0;
    for(int i=n-d;i<n;i++)
    {
        arr[i]=temp[j];
        j++;
    }

    // print
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}

void leftRotateDPlaceOptimal(int arr[], int n, int d)
{
    // O(d) + O(n-d) + O(n) = O(2n)
    d = d % n;

    // 1,2,3,4,5,6,7
    reverse(arr, arr+d);   // 3 2 1   4 5 6 7
    reverse(arr+d, arr+n); // 3 2 1   7 6 5 4
    reverse(arr, arr+n);   // 4 5 6 7 1 2 3
    // print
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int n=7;
    int k=3;
    int arr[7]={1,2,3,4,5,6,7};
    leftRotateDPlace(arr,n,k);
    cout<<endl;
    int arrr[7]={1,2,3,4,5,6,7};
    leftRotateDPlaceOptimal(arrr,n,k);

}