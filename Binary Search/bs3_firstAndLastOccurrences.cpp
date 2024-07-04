#include<bits/stdc++.h>

using namespace std;

int lowerBound(vector<int> arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] >= x) {
            ans = mid;
            //look for smaller index on the left
            high = mid - 1;
        }
        else {
            low = mid + 1; // look on the right
        }
    }
    return ans;
}

int upperBound(vector<int> &arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] > x) {
            ans = mid;
            //look for smaller index on the left
            high = mid - 1;
        }
        else {
            low = mid + 1; // look on the right
        }
    }
    return ans;
}

pair<int, int> solve(vector<int> &arr, int n, int x) {
	int lb = lowerBound(arr, n, x);
	if(lb==n || arr[lb] != x)
    {
        return {-1,-1};
    }
    return make_pair(lb, upperBound(arr,n,x)-1);
}

int main() {
  int n = 7;
  int key = 41;
  vector < int > v = {3,4,13,13,13,20,40};
  pair<int, int> ans = solve(v, n, key);
  cout << ans.first <<" "<<ans.second;

  return 0;
}