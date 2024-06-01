#include<bits/stdc++.h>
using namespace std;

int bruteforce(int arr[], int n)
{
    // O(nlog(n))
    sort(arr, arr+n);
    int largest= arr[n-1];

    int second= arr[n-2];

    for(int i = n-2; i>=0; i--)
    {
        if(arr[i]!=largest)
        {
            second= arr[i];
            break;
        }
    }
    return second;
}


int better(int arr[], int n)
{
    // O(n+n) = 2n
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    int SMax = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>SMax && arr[i]!=max)
        {
            SMax=arr[i];
        }
    }
    return SMax;
    
}



int optimal(int arr[], int n)
{
    // O(n)
    int largest = arr[0];
    int sLargest = INT_MIN;

    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            sLargest= largest;
            largest= arr[i];
        }
        else if(arr[i]<largest && arr[i]>sLargest)
        {
            sLargest=arr[i];
        }
    }
    return sLargest;
}

int main()
{
    int n=5;
    int arr[5]={5,1,3,5,1};
    cout<<"Bruteforce: "<< bruteforce(arr,n)<<endl;
    cout<<"Better: "<< better(arr,n)<<endl;
    cout<<"Optimal: "<< optimal(arr,n)<<endl;

}