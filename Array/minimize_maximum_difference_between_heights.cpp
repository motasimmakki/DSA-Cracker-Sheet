// Sample Input 01: 
// Arr: 1, 5, 8, 10
// k: 2
// Sample Output:
// 5

// Sample Input 02: 
// Arr: 3, 9, 12, 16, 20
// k: 3
// Sample Output:
// 11

#include<iostream>
#include<algorithm>
using namespace std;

int getMinDiff(int arr[], int n, int k){
    int result;


    return result;
}

int main(){
    // int arr[] = {1, 5, 8, 10}, k = 2;
    int arr[] = {3, 9, 12, 16, 20}, k = 3;
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<< "\nMinimum Difference After Operation Is: "<< getMinDiff(arr, size, k);

    return 0;
}