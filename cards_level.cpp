//find the total number of cards for builind pyramids are shown in the logic
// 1st lvl - 2cards , 2nd lvl- 7 card

#include<bits/stdc++.h>
using namespace std;   

int cardTotal(int n){
    if(n==0)return 0;
    if(n==1)return 2;
    int arr[n+1];
    arr[0]=0;
    arr[1]=2;
    for(int i=2;i<=n;i++){
       arr[i]=((2*i)+i-1+arr[i-1])%1000007;
    }
    return arr[n];
}

int main(){
      int n;
    cin>>n;
    cout<<cardTotal(n);
}