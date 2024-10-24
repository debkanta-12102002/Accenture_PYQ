//given an array and size is N. find and return an integer value representing sum of the array elements present at the even index of the reversed array
// 10 20 30 40 50 60 op->120 
#include<bits/stdc++.h>
using namespace std;

int positionSum(int arr[],int n){
    
    if(n==0)return 0;
    int l=0;
    int r=n-1;
    
    while(l<=r){
        swap(arr[l],arr[r]);
        l++;
        r--;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            sum+=arr[i];
        }
    }
    return sum;
}


int main(){
    int arr[]={10, 20, 30, 40, 50, 60};
    int n=sizeof(arr)/sizeof (arr[0]);
    cout<<positionSum(arr,n);
    return 0;
}