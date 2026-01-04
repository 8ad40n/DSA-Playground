#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0; i<=n-1;i++){
        int mini = i;
        for(int j=i; j<=n-1; j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}
int main(){
    int arr[] = {13, 46, 24, 52, 20, 9};
    selectionSort(arr, 6);
    for(int i=0; i<6; i++){
        cout << arr[i] << " ";
    }
}

// O(n)^2 time complexity
// O(1) space complexity