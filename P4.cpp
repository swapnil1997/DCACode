/*

Find Minimum element in Sorted Rotated Array

*/

#include <iostream>
using namespace std;

int findminBS(int arr[],int low,int high,int size){


        int mid = (low+high)/2;
        int next = (mid+1) % size;
        int prev = (mid - 1 + size) % size;
        if(arr[mid] < arr[prev] && arr[mid] < arr[next])
            return mid;
        //In Another Cases we need to move towards Unsorted array
        if(arr[low] > arr[mid]) //---This means, the Unsorted array is on left side
            return findminBS(arr,low,mid-1,size);
        if(arr[mid] > arr[high])//---This means, the Unsorted array is on right side
            return findminBS(arr,mid+1,high,size);


}
int main(){
    int arr[] = {11,12,15};

    //int arr[] = {3,4,5,6,2};

    int n = sizeof(arr)/sizeof(int);

    int a = findminBS(arr,0,n-1,n);

    cout<<a<<endl;
}