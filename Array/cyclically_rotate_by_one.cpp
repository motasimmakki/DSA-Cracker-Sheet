// Sample Input 01:
// Arr: 1, 2, 3, 4, 5
// Sample Output:
// 5 1 2 3 4

// Sample Input 02:
// Arr: 9, 8, 7, 6, 4, 2, 1, 3
// Sample Output:
// 3 9 8 7 6 4 2 1

#include<iostream>
using namespace std;

void rotateByOne(int arr[], int n){
    int last = arr[n-1];
    for(int i = n-2; i >= 0; i--)
        arr[i+1] = arr[i];
    arr[0] = last;
}

int main(){
    // int arr[] = {1, 2, 3, 4, 5};
    int arr[] = {9, 8, 7, 6, 4, 2, 1, 3};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<< "\nArray Before Rotating: "<< endl;
    for(int i = 0; i < size; i++)
        cout<< arr[i]<< " ";

    rotateByOne(arr, size);

    cout<< "\nArray After Rotating: "<< endl;
    for(int i = 0; i < size; i++)
        cout<< arr[i]<< " ";

    return 0;
}