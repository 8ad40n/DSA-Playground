#include<bits/stdc++.h>
using namespace std;
void reverseA(int arr[],int l,int r)
{
    if(l>r)
    {
        return;
    }
    swap(arr[l], arr[r]);
    reverseA(arr, l+1, r-1);
}

// another approach
void reverseB(int i, int arr[], int n)
{
    if(i>=n/2)return;
    swap(arr[i],arr[n-i-1]);
    reverseB(i+1,arr,n);
}

int main()
{
    int n=5;
    int arr[n]={1,2,3,4,5};
    int l= 0;
    int r= n-1;

    reverseA(arr, l, r);
    
    for(auto i:arr)
    {
        cout<<i<<" ";
    }

    int arr1[n]={1,2,3,4,5};
    reverseB(l,arr1,n);
    for(auto i:arr1)
    {
        cout<<i<<" ";

    }
    return 0;
}