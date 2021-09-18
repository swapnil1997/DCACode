/*

Given a Sorted and Rotated array...find if there is a pair with given sum....

*/

#include <iostream>

using namespace std;

bool findpair(int arr[],int n,int size){
    /*
    Need to find index of two elements.....
    1) smallest element
    2) largest element
    */
   int l,r,i;
   for(i = 0 ; i < n ; i++){
       if(arr[i]>arr[i+1])
        break;
   }
   l = (i + 1) % n; //smallest element
   r = i; //largest element
   
   // keep moving l or r...till they meet

   while(l!=r){
       if(arr[l] + arr[r] == size) //if sum is equal to size
        return true;
       if(arr[l] + arr[r] < size) //if sum is lesser than size then move l to the higher side
           l = (l + 1) % n;
       else //move r to the smaller side..
           r = (n + r - 1) % n;
   }
   return false;
}

int main(){
    int arr[] = {11,15,6,8,9,10};

    int n = sizeof(arr)/sizeof(int);

    int sum = 16;

    if(findpair(arr,n,sum)){
        cout<<"Pair is exist";
    }else{
        cout<<"Pair is not exist";
    }

    return 0;
}