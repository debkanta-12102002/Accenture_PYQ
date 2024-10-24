//given an integer N .check the number is meta or not. meta is divisable by 1 2 4 8 but not 10

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int meta_num(int num){
    int count =0;
    for(int i=1; i<num; i++){
        if(i%1 == 0 && i%2 == 0 && i%4 == 0 && i%8 == 0){
             count++;
        }
    }
    return count;
}

int main(){
    int num;
    cout << "Enter the integer number ->";
    cin >> num;
    int ans = meta_num(num);
    cout << "Total count of meta number is->"<< ans;
    return 0;
}