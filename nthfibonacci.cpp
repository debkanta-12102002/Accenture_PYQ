// given input N.return the fibonacci series

#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n==0 or n==1)return n;
    int a=0;
    int b=1;
    int c;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}



int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n);
}