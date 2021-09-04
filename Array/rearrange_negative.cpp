// Sample Input 01:
// Arr: -12, 11, -13, -5, 6, -7, 5, -3, -6
// Sample Output:
// Arr: -12 -13 -5 -7 -3 -6 11 6 5

// Sample Input 02:
// Arr: -1, 2, -3, 4, 5, 6, -7, 8, 9
// Sample Output:
// Arr: -1 -3 -7 4 5 6 2 8 9

// Sample Input 03:
// Arr: -12, 11, -13, -5, 6, -7, 5, -3, 11
// Sample Output:
// Arr: -12 -3 -13 -5 -7 6 5 11 11

#include<iostream>
using namespace std;

void swap(int &num1, int &num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void rearrange(int arr[], int n){
    int i = 0, j = n-1;

    while(i < j){
        while(arr[i] < 0)
            i++;
        while(arr[j] > 0)
            j--;
        if(i < j)
            swap(arr[i], arr[j]);
    }
}

int main(){
    // int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    // int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, 11};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<< "\nArray Before Rearranging -ve:"<< endl;
    for(int i = 0; i < size; i++)
        cout<< arr[i]<< " ";
    
    rearrange(arr, size);
    
    cout<< "\nArray After Rearranging -ve:"<< endl;
    for(int i = 0; i < size; i++)
        cout<< arr[i]<< " ";

    return 0;
}