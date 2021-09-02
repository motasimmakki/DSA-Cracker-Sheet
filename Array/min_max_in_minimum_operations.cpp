#include<iostream>
using namespace std;

typedef struct Pair{
    int min;
    int max;
}MinMax;

MinMax getMinMax(int arr[], int n){
    MinMax pair{0, 0};
    int i = 0;
    if(!(n%2)){
        if(arr[0] < arr[1]){
            pair.min = arr[0];
            pair.max = arr[1];
        }else{
            pair.max = arr[0];
            pair.min = arr[1];
        }
        i = 2;
    } else{
        pair.min = arr[0];
        pair.max = arr[0];
        i = 1;
    }
    while(i < n-1){
        if(arr[i] > arr[i-1]){
            pair.max = max(pair.max, arr[i]);
            pair.min = min(pair.min, arr[i+1]);
        }else{
            pair.max = max(pair.max, arr[i+1]);
            pair.min = min(pair.min, arr[i]);
        }
        i += 2;
    }
    return pair;
}

int main(){
    // Test Case 01:
    // int arr[] = {1000, 11, 445, 1, 330, 3000};
    
    // Test Case 02:
    // int arr[] = {11, 445, 1, 330, 300, 4, 5000};

    // Test Case 03:
    int arr[] = {11, 445, -1, 330, 300, -4, 5000};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    MinMax pair = getMinMax(arr, size);
    cout<< "\nMinimum In An Array Is: "<< pair.min<< endl;
    cout<< "\nMaximum In An Array Is: "<< pair.max<< endl;
     
    return 0;
}