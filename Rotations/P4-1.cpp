/*
Finding an element in a sorted rotated array
*/

#include <iostream>
using namespace std;

int findmin(int arr[],int low,int high,int size){
    int mid = (low+high)/2;
    int prev = (mid -1 + size) % size;
    int next = (mid +1) % size;
    if(arr[mid]<arr[prev] && arr[mid] < arr[next])
        return mid;
    if(arr[mid] > arr[high])
        return findmin(arr,mid+1,high,size);
    if(arr[mid] < arr[low])
        return findmin(arr,low,mid-1,size);
}
int binarysearch(int arr[],int low,int high,int key){
    int mid = (low+high)/2;
    if(low>high)
        return -1;
    if(arr[mid]==key)
        return mid;
    if(arr[mid] > key)
        return binarysearch(arr,low,mid-1,key);
    if(arr[mid]<key)
        return binarysearch(arr,mid+1,high,key);
}
int main(){
    int arr[] = {4,5,6,2,3};
    int n = sizeof(arr)/sizeof(int);
    int e = 4;
    int m = findmin(arr,0,n-1,n);
    if(arr[m]==e){
        cout<<m<<endl;
    }
    int a = binarysearch(arr,0,m-1,e);
    int b = binarysearch(arr,m+1,n-1,e);
    if(a>b){
        cout<<a<<endl;
    }else{
        cout<<b<<endl;
    }
}