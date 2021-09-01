/*
Rotate elements by d positions in an array by reverse method

Time Complexity---O(n)

Let AB are the two parts of the input array where A = arr[0..d-1] and B = arr[d..n-1]. The idea of the algorithm is : 

Reverse A to get ArB, where Ar is reverse of A.
Reverse B to get ArBr, where Br is reverse of B.
Reverse all to get (ArBr) r = BA.
Example : 
Let the array be arr[] = [1, 2, 3, 4, 5, 6, 7], d =2 and n = 7 
A = [1, 2] and B = [3, 4, 5, 6, 7] 
 

Reverse A, we get ArB = [2, 1, 3, 4, 5, 6, 7]
Reverse B, we get ArBr = [2, 1, 7, 6, 5, 4, 3]
Reverse all, we get (ArBr)r = [3, 4, 5, 6, 7, 1, 2]

*/

#include <iostream>

using namespace std;

//Function to Reverse the Array
void reverseArray(int arr[] , int start , int end){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateelementbyleft(int arr[],int d,int n){
    if(d == 0)
        return;
    d = d % n; //if in case d exceeds the array lenght

    reverseArray(arr,0,d-1);
    reverseArray(arr,d,n-1);
    reverseArray(arr,0,n-1);
}

void printarray(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

int arr[] = {1,2,3,4,5,6,7};

int n = sizeof(arr)/sizeof(int);
int d = 2;

rotateelementbyleft(arr,d,n);

printarray(arr,n);

}