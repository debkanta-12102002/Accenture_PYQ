//given a number N derived the sum of its individual digits and find if that is a prime or not
//N=43 -> 4+3=7 which is a prime
#include<bits/stdc++.h>
using namespace std;

string googlyPrime(int n){
    int sum=0;
    if(n==0 or n==1)return "NO";
    while(n>0){
        int rem =n%10;          
        sum+=rem;
        n=n/10;
    }
    bool isprime=true;
    for(int i=2;i<=sqrt(sum);i++){
        if(sum%i==0){
            isprime=false;
        }
    }
    return isprime ? "YES" : "NO";

}



int main(){
    int n;
    cin>>n;
    cout<<googlyPrime(n);
}