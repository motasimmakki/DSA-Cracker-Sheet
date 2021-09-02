// Sample Input 01:
// 6
// 7 10 4 3 20 15
// 3
// Sample Output:
// 7

// Sample Input 02:
// 5
// 7 10 4 20 15
// 4
// Sample Output:
// 15

//Initial function template for C++
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        sort(arr+l, arr+r+1);
        return arr[k-1];
    }
};

// { Driver Code Starts. 
int main(){
    
    int number_of_elements;
    cin>> number_of_elements;
    int a[number_of_elements];
    for(int i = 0; i < number_of_elements; i++)
        cin>> a[i];
    int k;
    cin>> k;
    Solution ob;
    cout<< k<<"th Smallest Element is: "<< ob.kthSmallest(a, 0, number_of_elements-1, k)<< endl;

    return 0;
}  // } Driver Code Ends