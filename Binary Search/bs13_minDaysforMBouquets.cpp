#include<bits/stdc++.h>
using namespace std;

bool possible(vector<int> arr, int day, int m, int k)
{
    int cnt =0;
    int noOfB=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<=day)
        {
            cnt++;
        }
        else{
            noOfB+=cnt/k;
            cnt=0;
        }
    }
    noOfB+= cnt/k;
    return noOfB>=m;
}

int solve(vector<int> arr, int m, int k)
{
    int n = arr.size();
    if(m*k > n)
    {
        return -1;
    }
    int l= *min_element(arr.begin(), arr.end());
    int h= *max_element(arr.begin(), arr.end());
    int ans= h;

    while(l<=h){
        int mid= (l+h)/2;
        if(possible(arr,mid,m,k))
        {
            ans= mid;
            h = mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return ans;

}

int main()
{
    vector<int>v{7,7,7,7,13,11,12,7};
    int m=2, k=3;
    cout<<solve(v,m,k);

}