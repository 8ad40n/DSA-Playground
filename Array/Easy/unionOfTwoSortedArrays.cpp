#include<bits/stdc++.h>
using namespace std;


void solve(int arr[], int arr1[], int n, int n1)
{
    // O(n1logn) + O(n2logn) + O(n1+n2)

    set<int> st;
    // first array push in set
    for(int i=0;i<n;i++)
    {
        st.insert(arr[i]);
    }
    // second array push in set
    for(int i=0;i<n1;i++)
    {
        st.insert(arr1[i]);
    }
    //print
    for(auto it:st)
    {
        cout<<it<<" ";
    }
}

void solveOptimal(int arr1[], int arr2[], int n, int m) {
    // O(n1+n2)

    int i = 0, j = 0; // pointers
    vector < int > Union; // Uninon vector
    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) // Case 1 and 2
        {
            if (Union.size() == 0 || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;
        } 
        else // case 3
        {
            if (Union.size() == 0 || Union.back() != arr2[j])
                Union.push_back(arr2[j]);
            j++;
        }
    }
    while (i < n) // IF any element left in arr1
    {
        if (Union.back() != arr1[i])
        Union.push_back(arr1[i]);
        i++;
    }
    while (j < m) // If any elements left in arr2
    {
        if (Union.back() != arr2[j])
        Union.push_back(arr2[j]);
        j++;
    }
    //print
    for(auto it:Union)
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
    // union: 1 2 3 4 5 6

    // brute force approach
    solve(arr,arr1,n,n1);
    cout<<endl;

    int a[7]={1,1,2,2,3,4,5};
    int a1[8]={1,2,3,4,5,6,6,6};
    // Optimal approach
    solveOptimal(arr,arr1,n,n1);


}