// Program to check whether the given number is prime or not

#include<iostream>
using namespace std;

bool isprime(int n){
    if(n <= 1)
     return false;

    for(int i = 2 ; i < n ; i++){
        if(n % i == 0){
            return false;
        }
    }

    return true;
}
int main(){
    int n;
    cout << "Enter the number";
    cin >> n;
    isprime(n) ? cout << "true \n" : cout << "false \n";
}
