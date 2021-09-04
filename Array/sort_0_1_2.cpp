// Time Complexity: O(n)
// Space Complexity: O(n)

#include<iostream>
#include<vector>
using namespace std;

void sort_0_1_2(int arr[], int n){
    // Method 01:
    // int f_arr[3] = {0};
    // int result[n + 1];
    
    // for(int i = 0; i < n; i++)
    //     f_arr[arr[i]] += 1;
    // for(int i = 1; i < 3; i++)
    //     f_arr[i] = (f_arr[i-1] + f_arr[i]);
    // for(int i = n-1; i >= 0; i--)
    //     result[f_arr[arr[i]]-- - 1] = arr[i];
    // for(int i = 0; i < n; i++)
    //     arr[i] = result[i];
    
    // Method 01:
    int f_arr[3] = {0};
    
    for(int i = 0; i < n; i++)
        f_arr[arr[i]] += 1;
    vector<int> result;
    for(int i = 0; i < 3; i++){
        while(f_arr[i]--)
            result.push_back(i);
    }
    for(int i = 0; i < n; i++)
        arr[i] = result[i];
}

int main(){
    // int arr[] = {0, 2, 1, 2, 0};
    int arr[] = {0, 2, 1, 2, 0, 0, 1, 0, 2, 0, 2, 0, 2, 0, 2, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<< "\nArray Before Sorting:"<< endl;
    for(int i = 0; i < size; i++)
        cout<< arr[i]<< " ";
    
    sort_0_1_2(arr, size);
    
    cout<< "\nArray After Sorting:"<< endl;
    for(int i = 0; i < size; i++)
        cout<< arr[i]<< " ";

    return 0;
}