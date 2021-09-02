#include<iostream>
using namespace std;

typedef struct Pair{
    int min;
    int max;
}MinMax;

MinMax getMinMax(int arr[], int n){
    MinMax pair{0, 0};

    return pair;
}

int main(){
    int arr[] = {1000, 11, 445, 1, 330, 3000};
    int size = sizeof(arr)/sizeof(arr[0]);

    MinMax pair = getMinMax(arr, size);
    cout<< "\nMinimum In An Array Is: "<< pair.min<< endl;
    cout<< "\nMaximum In An Array Is: "<< pair.max<< endl;
     
    return 0;
}