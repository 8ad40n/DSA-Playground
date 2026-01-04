#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
    for(int i=0; i<=n-1;i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}
int main(){
    int arr[] = {13, 46, 24, 52, 20, 9};
    insertionSort(arr, 6);
    for(int i=0; i<6; i++){
        cout << arr[i] << " ";
    }
}

// O(n)^2 time complexity in worst and average case
// O(n) time complexity in best case when array is already sorted
// O(1) space complexity