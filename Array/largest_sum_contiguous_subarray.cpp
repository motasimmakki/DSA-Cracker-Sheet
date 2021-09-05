// Sample Input 01:
// Arr: 1,2,3,-2,5
// Sample Output:
// 9

// Sample Input 02:
// Arr: -1,-2,-3,-4
// Sample Output:
// -1

// Time Complexity: O(n)
// Auxiliary space: O(1)

#include<iostream>
using namespace std;

int getMaxSubarraySum(int arr[], int n){

}

int main(){
    // int arr[] = {1,2,3,-2,5};
    int arr[] = {-1,-2,-3,-4};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<< "\nMaximum Sub-Array Sum Is: "<< getMaxSubarraySum(arr, size)<< endl;

    return 0;
}