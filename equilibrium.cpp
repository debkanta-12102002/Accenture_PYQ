//return the index of equilibrium point in the array whwrw the sum of left elements and the sum of right elements are equal. if not then return -1

#include<bits/stdc++.h>
using namespace std;
int isEquilibrium(int arr[],int n){
    int left=0;
    int right =0;
    for(int i=0;i<n;i++){
        right+=arr[i];
    }
    for(int i=0;i<n;i++){
        right-=arr[i];
        if(left == right) return i;
        left+=arr[i];
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << isEquilibrium(arr,n);
}
