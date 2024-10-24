#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//with extra space using vector
/*int main(){
    int n;
    cin>>n;
    vector<int>v;
    while(n>0){
        int r=n%10;
        v.push_back(r);
        n/=10;
    }
    int ans=0;
    for(int i=0;i<v.size();i++){
        ans= ans^v[i];
    }

  cout<<ans;
    
    return 0;
}*/

//without extra space xor
int main(){
    int n;
    cin>>n;
    int ans=0;
    while(n>0){
        int r=n%10;
       ans=ans^r;
        n/=10;
    }
  cout<<ans;
    
    return 0;
}


