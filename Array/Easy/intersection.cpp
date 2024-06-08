#include<bits/stdc++.h>
using namespace std;


void solve(int A[], int B[], int n, int m)
{
    vector<int> ans;
    int visi[m]={0};
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<m;j++)
         {
             if(A[i]==B[j] && visi[j]==0)
             {
                 ans.push_back(A[i]);
                 visi[j]=1;
                 break;
             }

             if(B[j]>A[i])
             {
                 break;
             }
         }
    }
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
}

void solveOptimal(int A[], int B[], int n, int m) {
    vector<int> ans;
    int i=0;
    int j=0;
    while (i<n && j<m)
    {
        if(A[i]<B[j])
        {
            i++;
        }
        else if(B[j]<A[i])
        {
            j++;
        }
        else
        {
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }
    
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
}


int main()
{
    int n=7;
    int n1=8;
    int arr[7]={1,1,2,2,3,4,5};
    int arr1[8]={1,2,3,4,5,6,6,6};
    // intersection: 1 2 3 4 5

    // brute force approach
    solve(arr,arr1,n,n1);
    cout<<endl;

    int a[7]={1,1,2,2,3,4,5};
    int a1[8]={1,2,3,4,5,6,6,6};
    // Optimal approach
    solveOptimal(arr,arr1,n,n1);


}