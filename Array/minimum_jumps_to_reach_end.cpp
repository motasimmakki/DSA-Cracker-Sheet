// Sample Input 01:
// Arr: 1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9
// Sample Output:
// 3

// Sample Input 02:
// Arr: 1, 4, 3, 2, 6, 7
// Sample Output:
// 2

// TC: O(n), AS: O(1)

#include<iostream>
using namespace std;

int minJumps(int arr[], int n){
    if(arr[0] == 0)
        return -1;
    int maxReachable = arr[0], jumpCount = 1, stepsPossible = arr[0];
    
    for(int i = 1; i < n; i++){
        if(i == n-1) 
            return jumpCount;
        maxReachable = max(maxReachable, i+arr[i]);
        
        stepsPossible--;
        if(stepsPossible == 0){
            jumpCount++;
            if(i >= maxReachable)
                return -1;
            stepsPossible = maxReachable-i;
        }
    }
    return -1;
}

int main(){
    // int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int arr[] = {1, 4, 3, 2, 6, 7};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<< "\nMinimum Jump To Reach End: "<< minJumps(arr, size)<< endl;

    return 0;
}