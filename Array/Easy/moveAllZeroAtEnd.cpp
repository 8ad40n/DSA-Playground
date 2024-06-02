#include<bits/stdc++.h>
using namespace std;

// 2 0 1 3 0 5 0
// 2 1 3 5 0 0 0 after moving

void moveAllZeroAtEnd(int arr[], int n)
{
    // O(2n)

    vector<int>temp;
    // non zeros storing in temp
    for(int i=0;i<n;i++)
    {
        if(arr[i] != 0)
        {
            temp.push_back(arr[i]);
        }
    }
    // non zeros moving at first
    for(int i=0;i<temp.size();i++)
    {
        arr[i]=temp[i];
    }
    // zeros moving at last
    for(int i=temp.size();i<n;i++)
    {
        arr[i]=0;
    }
    // print
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    

}

void moveAllZeroAtEndOptimal(int arr[], int n)
{
    // O(n)

    int j= INT_MIN;
    
    // storing index of 0 in j
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            j=i;
            break;
        }
    }

    // swap i with i+1 
    for(int i=j+1;i<n;i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    // print
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}



int main()
{
    int n=7;
    int arr[7]={2,0,1,3,0,5,0};
    moveAllZeroAtEnd(arr,n);

    cout<<endl;
    int arr1[7]={2,0,1,3,0,5,0};
    moveAllZeroAtEndOptimal(arr1,n);

}