// Sample Input 01:
// Arr: 1,3,4,2,2
// Sample Output:
// 2

// Sample Input 02:
// Arr: 3,1,3,4,2
// Sample Output:
// 3

// Sample Input 03:
// Arr: 1,1
// Sample Output:
// 1

// Sample Input 04:
// Arr: 1,1,2
// Sample Output:
// 1

// TC: O(n), AS: O(1)

#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int>& nums) {
    // Marking Visited Indices
    // Without taking any extra space.
    for(int i = 0; i < nums.size(); i++) {
        int index = abs(nums[i]) - 1;
        // mark as visited
        nums[index] *= -1;
        // incase of duplicate, this will become +ve 
        if(nums[index] > 0)
            return abs(nums[i]);
    }    
    return -1;
}

int main(){
    // vector<int> arr{1,3,4,2,2};
    vector<int> arr{3,1,3,4,2};
    // vector<int> arr{1,1};
    // vector<int> arr{1,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<< "\nDuplicate in an Array is: "<< findDuplicate(arr);

    return 0;
}