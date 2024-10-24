//given an array length n. find the element of the mid index array ignoring all negative indices at which negative numbers are present in the array
//ip-> 1 -2 3 -4 5 6  op-> 3
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int midIndex( vector<int> nums,int n){
    if(n==0)return 0;
    int count=0;
        for(int i=0;i<n;i++){
        if(nums[i]>0)count++;
    }
    int mid=(n-1)/2;
    for(auto i:nums){
        if(i>0){
            mid--;
            if(mid==0)return i;
            i++;
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int ans = midIndex(nums,n);
    cout << ans;
    return 0;
}  