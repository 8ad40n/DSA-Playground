#include<bits/stdc++.h>
using namespace std;


vector<int> optimal(vector<int> &A) {
    // O(3N)
    int n = A.size(); // size of the array.

    // Step 1: Find the break point:
    int ind = -1; // break point
    for (int i = n - 2; i >= 0; i--) {
        if (A[i] < A[i + 1]) {
            // index i is the break point
            ind = i;
            break;
        }
    }

    // If break point does not exist:
    if (ind == -1) {
        // reverse the whole array:
        reverse(A.begin(), A.end());
        return A;
    }

    // Step 2: Find the next greater element
    //         and swap it with arr[ind]:

    for (int i = n - 1; i > ind; i--) {
        if (A[i] > A[ind]) {
            swap(A[i], A[ind]);
            break;
        }
    }

    // Step 3: reverse the right half:
    reverse(A.begin() + ind + 1, A.end());

    return A;
}




int main() {

    int arr[] = {1,3,2};
    // better using STL
    next_permutation(arr,arr+3);
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    


    vector<int> A = {2, 1, 5, 4, 3, 0, 0};
    vector<int> ans = optimal(A);

    cout << "The next permutation is: [";
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << "]";

    return 0;

}