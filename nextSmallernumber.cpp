//given an array with size. replace each number of array with nearest smaller number on it's rigth of array
//i/p-> 32 11 7 6 5 6 1 o/p-> 2 1 7 6 5 1 1 -1
#include<bits/stdc++.h>
using namespace std;             

void  nextSmaller( int a[],int n){
    stack<int>s;
    s.push(a[n-1]);
    a[n-1]=-1;
    for(int i=n-2;i>=0;i--){
        int x= a[i];
        while(s.size()>0 && s.top()>x){
            s.pop();
        }
        if(s.size()==0){
            a[i] = -1;
        }
        else{
            a[i]=s.top();
            
        }
        s.push(x);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
  return;
}


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    nextSmaller(a,n);
   
    return 0;
}
