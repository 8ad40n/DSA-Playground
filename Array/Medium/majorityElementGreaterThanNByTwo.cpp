#include<bits/stdc++.h>
using namespace std;


int bruteforce(vector<int> v) {
    // O(n^2)
    int n = v.size();

    for (int i = 0; i < n; i++) {
        //selected element is v[i]
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            // counting the frequency of v[i]
            if (v[j] == v[i]) {
                cnt++;
            }
        }
        // check if frquency is greater than n/2:
        if (cnt > (n / 2))
            return v[i];
    }

    return -1;
}

int better(vector<int> v) {
    // O(N*logN) + O(N)

    int n = v.size();
    map<int, int> mpp;

    for (int i = 0; i < n; i++) {
        mpp[v[i]]++;
    }

    for (auto it : mpp) {
        if (it.second > (n / 2)) {
            return it.first;
        }
    }

    return -1;
}


// Moore's Voting Algorithm
int optimal(vector<int> v) {
    // O(n)

    //size of the given array:
    int n = v.size();
    int cnt = 0; // count
    int el; // Element

    //applying the algorithm:
    for (int i = 0; i < n; i++) {
        if (cnt == 0) {
            cnt = 1;
            el = v[i];
        }
        else if (el == v[i]) cnt++;
        else cnt--;
    }

    //checking if the stored element
    // is the majority element:
    int cnt1 = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == el) cnt1++;
    }

    if (cnt1 > (n / 2)) return el;
    return -1;
}


int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = bruteforce(arr);
    cout << "The majority element is: " << ans << endl;


    vector<int> arr1 = {2, 2, 1, 1, 1, 2, 2};
    int ans1 = better(arr1);
    cout << "The majority element is: " << ans1 << endl;

    vector<int> arr3 = {2, 2, 1, 1, 1, 2, 2};
    int ans3 = optimal(arr3);
    cout << "The majority element is: " << ans3 << endl;

    return 0;
}