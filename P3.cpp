//C++ Program to rotate array left by d elements

#include <iostream>

using namespace std;

void rotateleftbyone(int arr[],int n){
    int temp = arr[0];
    for(int i = 0 ; i < n-1 ; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}

void rotateleft(int arr[],int d,int n){
    for(int i = 0 ; i < d ; i++){
        rotateleftbyone(arr,n);
    }
}

void printarr(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(int);
    int d = 2;
    rotateleft(arr,d,n);
    printarr(arr,n);
}
