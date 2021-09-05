#include<iostream>
using namespace std;

void swap(int &num1, int &num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void rotateByOne(int arr[], int n){

}

int main(){
    int arr[] = {};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<< "\nArray Before Rotating: "<< endl;
    for(int i = 0; i < size; i++)
        cout<< arr[i]<< " ";

    rotateByOne(arr, size);

    cout<< "\nArray After Rotating: "<< endl;
    for(int i = 0; i < size; i++)
        cout<< arr[i]<< " ";

    return 0;
}