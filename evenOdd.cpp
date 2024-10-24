//given a number N.if N is odd then print product of digits of the number N otherwise the value of the sum of a digits of the number N.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sumDigit(int n){
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int proDigit(int n){
    int pro=1;
    while(n){
        pro=pro*(n%10);
        n=n/10;
    }
    return pro;
}

int solve(int n){
    
    if(n%2==0){
    return sumDigit(n);
    }
    else {
        return proDigit(n);
    }
    
    
}



int main(){
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}