// Sample Input 01:
// Arr1: 1, 2, 3, 4, 5
// Arr2: 1, 2, 3
// Sample Output:
// 5

// Sample Input 02:
// Arr1: 85, 25, 1, 32, 54, 6
// Arr2: 85, 2
// Sample Output:
// 7

#include<iostream>
#include<set>
using namespace std;

int doUnion(int a[], int n, int b[], int m)  {
    set<int> count;
    for(int i = 0; i < n; i++)
        count.insert(a[i]);
    for(int i = 0; i < m; i++)
        count.insert(b[i]);
    return count.size();
}

int main(){
    // int arr1[] = {1, 2, 3, 4, 5};
    int arr1[] = {85, 25, 1, 32, 54, 6};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    // int arr2[] = {1, 2, 3};
    int arr2[] = {85, 2};
    int m = sizeof(arr2)/sizeof(arr2[0]);

    cout<< "\nNumber of element After Union Is: "<< doUnion(arr1, n, arr2, m);

    return 0;
}