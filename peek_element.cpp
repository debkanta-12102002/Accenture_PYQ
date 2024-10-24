// A is an array N is the length initial with ascending and decending order retern the peek element
// A[]=[1,2,3,4,3,2,1] N=7
//Output=4

#include<bits/stdc++.h>
using namespace std;

int peekElement(int a[],int n){
   
    if(n==0)return 0;

    if(a[0]>a[1])return a[0];// 5 3

    if(a[n-1]>a[n-2])return a[n-1];// 1 2 3 4

    for(int i=1;i<n-1;i++){ // 1 2 3 4 3 2 1
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            return a[i];
        }
    }

    return -1;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout << peekElement(a,n);
    return 0;
}


