#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i=n-1; i>=0; i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
// O(n)^2 time complexity for worst and average case

void bubbleSortBestCase(int arr1[],int n){
    for(int i=n-1; i>=0; i--){
        int disSwapped = 0; 
        for(int j=0;j<=i-1;j++){
            if(arr1[j]>arr1[j+1]){
                int temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
                disSwapped = 1;
            }
        }
        if(disSwapped == 0){
            break;
        }
    }
}

// O(n) time complexity for best case when array is already sorted

int main(){
    int arr[] = {13, 46, 24, 52, 20, 9};
    bubbleSort(arr, 6);
    for(int i=0; i<6; i++){
        cout << arr[i] << " ";
    }


    cout << endl;
    int arr1[] = {1,2,3,4,5,6};
    bubbleSortBestCase(arr1, 6);
    for(int i=0; i<6; i++){
        cout << arr1[i] << " ";
    }
}