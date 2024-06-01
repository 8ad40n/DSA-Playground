// if we define array globally, initially it will all 0
// maximum size of array inside int main() -> 10^6
// But if we define array globally, maximum size of array -> 10^7
#include<bits/stdc++.h>
using namespace std;

int bruteforce(int arr[], int n)
{
    sort(arr, arr+n);
    return arr[n-1];
}

int optimal(int arr[], int n)
{
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

int main()
{
    int n=5;
    int arr[5]={2,1,3,5,1};
    cout<<"Bruteforce: "<< bruteforce(arr,n)<<endl;
    cout<<"Optimal: "<< optimal(arr,n)<<endl;

}