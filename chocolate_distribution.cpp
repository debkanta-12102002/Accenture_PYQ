// array A[] represent an array. 
// N is size of positive integer
// M is strudents
// 1->task to distribute chocolate packet each student one packet.... 2-> difference between max number of chocolate and min number of chocolate 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "enter the size-> ";
    cin>>n;
    int arr[n];
    cout<< "numbers of array-> ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int m;
    cout << "enter the student-> ";
    cin>>m;//students
    if(n == 0 || m == 0)return 0;
    sort(arr,arr+n); 
    int min_diff = INT_MAX;
    for(int i=0; i+m-1 < n; i++){
        int diff = arr[i+m-1] - arr[i];
        if(diff < min_diff){
            min_diff = diff;
        }
    }
    cout << "minimum difference-> "<< min_diff<<endl;
    return 0;
}