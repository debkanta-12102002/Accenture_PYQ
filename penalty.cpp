//given a set of numbers and arrange any orderr nut pays a penalty equal to the sum of the absolute difference between contiguous numbers

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int soln(int arr[], int n){
    int sum=0;
    if(n < 2) return -1;
    sort(arr,arr+n);
    for(int i=1; i<n; i++){
        sum = sum + abs(arr[i] - arr[i-1]);
    }
    return sum;
}


int main(){
    int n;
    cin >> n;
    
    int arr[10000];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int res = soln(arr,n);
    cout << res;
    return 0;
}
