//find a plot for a office expansition  that plot is squre in shape,find how many type of squre shape plot available



#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int is_perfect_sqr(int arr[],int n){
    int count =0;
    for(int i=0; i<n; i++){
        if(ceil((double)sqrt(arr[i])) == floor((double)sqrt(arr[i]))){
            count++;
        }
    }
    return count;
}



int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int ans =is_perfect_sqr(arr,n);
    cout << ans;
    return 0;
}