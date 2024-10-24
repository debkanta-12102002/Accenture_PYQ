// A array N numbers of elements.find and return int value total number of days where stock price decrease indicating neg growth



#include<bits/stdc++.h>
using namespace std;

int negativegrowth(int arr[],int n){
    if(n==0 && n==1) return 0;
    int count=0;
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
    }
   /* for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            count++;
        }
    }*/
    return count;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << negativegrowth(arr,n);
}
