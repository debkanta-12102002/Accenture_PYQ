//bob buy N candies has M amount money. best deal for him is that if the price of a candy is multiple of 5 that he doesn't pay, for the rest he has to pay amount mentioned in A[i].

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int buyToffies(int arr[],int n,int m){
    if (n==0)return 0;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%5==0){
            count++;
        }
        else{
            if(m>=arr[i]){
                m=m-arr[i];
                count++;
            }
        }
    }
    return count;
}



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    cout<<buyToffies(arr,n,m);
    return 0;
}