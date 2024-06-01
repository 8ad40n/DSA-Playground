#include<bits/stdc++.h>
using namespace std;

// Ascending order
bool checkSort(int arr[], int n)
{
    for (int i=1;i<n;i++)
    {
        if(arr[i]>=arr[i-1])
        {

        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n=5;
    int arr[5]={1,2,3,4,5};

    cout<<"Sorted ? : "<< checkSort(arr,n)<<endl;

}