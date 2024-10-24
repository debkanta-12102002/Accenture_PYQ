//alice has a magical shoes to climb 3 stairs at once. N number of houses want to reach to the roof . only the roof those houses where the number is multiple of 3 the number of houses whose roof alice can climb return the total number of houses

// 4 [12 21 3 4] op-> 3
// 2 [1 2] op->0


#include<bits/stdc++.h>
using namespace std;

int houses(int arr[],int n){ 
    if(n==0)return 0;
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0 && arr[i]%3==0)count++;
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << houses(arr,n);
}