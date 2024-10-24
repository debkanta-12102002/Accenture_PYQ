//find the sum of all prime numbers till N

#include<bits/stdc++.h>
using namespace std;
int isPrime(int n){
    if(n==0 || n==1)return 0;
    int sum=0;
    for(int i=2;i<=n;i++){
        bool isprime=true;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0){
                isprime=false;
                break;
            }
        }
        if(isprime)sum+=i;
    }
    
    return sum;
}


int main(){
    int n;
    cin>>n;
    cout<<isPrime(n);
}