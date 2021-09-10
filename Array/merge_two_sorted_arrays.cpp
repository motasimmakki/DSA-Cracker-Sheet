#include<iostream>
#include<algorithm>
using namespace std;

void mergeTwoSortedArr(int arr1[], int n, int arr2[], int m){
    int i = n-1, j = 0;
    while((i >= 0) and (j < m)){
        if(arr1[i] > arr2[j])
            swap(arr1[i], arr2[j]);
        i--; j++;
    }
    sort(arr1, arr1+n);
    sort(arr2, arr2+n);
}

void printArr(int arr[], int n){
    for(int i = 0; i < n; i++)
        cout<< arr[i]<< " ";
    cout<< endl;
}

int main(){
    int arr1[] = {1, 3, 5, 7};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {0, 2, 6, 8, 9};
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    cout<< "\nArray Before Merging: "<< endl;
    printArr(arr1, size1); printArr(arr2, size2);
    
    mergeTwoSortedArr(arr1, size1, arr2, size2);

    cout<< "\nArray After Merging: "<< endl;
    printArr(arr1, size1); printArr(arr2, size2);

    return 0;
}