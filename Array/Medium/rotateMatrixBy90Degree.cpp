
#include<bits/stdc++.h>

using namespace std;

vector < vector < int >> bruteforce(vector < vector < int >> & matrix) {
    // O(N*N)
    int n = matrix.size();
    vector < vector < int >> rotated(n, vector < int > (n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            rotated[j][n - i - 1] = matrix[i][j];
        }
    }
    return rotated;
}


void optimal(vector < vector < int >> & matrix) {
    // O(N*N) + O(N*N)
    int n = matrix.size();
    //transposing the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    //reversing each row of the matrix
    for (int i = 0; i < n; i++) {
    reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main() {
    vector < vector < int >> arr;
    arr =  {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector < vector < int >> rotated = bruteforce(arr);
    cout << "Rotated Image" << endl;
    for (int i = 0; i < rotated.size(); i++) {
        for (int j = 0; j < rotated[0].size(); j++) {
            cout << rotated[i][j] << " ";
        }
        cout << "\n";
    }



    vector < vector < int >> arr1;
    arr1 =  {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    optimal(arr1);
    cout << "Rotated Image" << endl;
    for (int i = 0; i < arr1.size(); i++) {
        for (int j = 0; j < arr1[0].size(); j++) {
            cout << arr1[i][j] << " ";
        }
    cout << "\n";
    }

}

