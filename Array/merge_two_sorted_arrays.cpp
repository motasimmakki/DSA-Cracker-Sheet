#include<iostream>
using namespace std;

void mergeTwoSortedArr(int arr1[], int n, int arr2[], int m){

}

void printArr(int arr[], int n){
    for(int i = 0; i < n; i++)
        cout<< arr[i]<< " ";
    cout<< endl;
}

int main(){
    int arr1[] = {};
    int size1 = sizeof(arr1)/sizeof(arr1);
    int arr2[] = {};
    int size2 = sizeof(arr2)/sizeof(arr2);

    cout<< "\nArray Before Merging: "<< endl;
    printArr(arr1, size1); printArr(arr2, size2);
    
    mergeTwoSortedArr(arr1, size1, arr2, size2);

    cout<< "\nArray After Merging: "<< endl;
    printArr(arr1, size1); printArr(arr2, size2);

    return 0;
}