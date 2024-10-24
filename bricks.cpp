//you gave a number of int N determine the number of bricks needed to make a house of bricks of N levels

// LOGIC -> Ap series S = n/2[2a+(n-1)d] a=first number d=gap between two number

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int res = n*(3*n+1)/2;
    cout << res;
    return 0;
}