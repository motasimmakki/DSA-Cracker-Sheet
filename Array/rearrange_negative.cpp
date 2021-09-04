// Sample Input:
// Arr: -12, 11, -13, -5, 6, -7, 5, -3, -6
// Sample Output:
// Arr: -12 -13 -5 -7 -3 -6 11 6 5

#include<iostream>
using namespace std;

void rearrange(int arr[], int n){

}

int main(){
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
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