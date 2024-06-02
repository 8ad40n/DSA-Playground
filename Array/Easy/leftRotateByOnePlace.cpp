#include<bits/stdc++.h>
using namespace std;

// 5 1 3 5 1
// 1 3 5 1 5 after left rotate by one place

void leftRotateOnePlace(int arr[], int n)
{
    // O(n)
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int n=5;
    int arr[5]={5,1,3,5,1};
    leftRotateOnePlace(arr,n);

}