// Problem Description -: Given an array Arr[ ] of N integers and a positive integer K. The task is to cyclically rotate the array clockwise by K.

#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

vector<int> rotate(int arr[],int a,int b){
    if(b > a){
        b = b % a;
    }
    vector<int> narr(a);
    int c;
    for(int i = 0 ; i < a ; i++){
        c = ((a-b) + i) % a;
        narr[i] = arr[c];
    }

    return narr;
}

int main(){
    int Array[] = {1,2,3,4,5};
    int N = sizeof(Array)/sizeof(int);
    int K = 5;

    vector<int> arr = rotate(Array,N,K);

    for (int i = 0 ; i < N ; i++){
        cout<<arr[i]<<" ";
    }

}

/*
1 2 3 4 5 n=5,k=2 rotate clockwise----

4 5 1 2 3 
*/