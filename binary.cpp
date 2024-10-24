//int operationsBinaryString(string str)
//A-AND , B-OR , C-XOR string separated with an alphabet
// input -> 1C0C1C1A0B1 output-> 1
//if NULL return -1 , length must be odd

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int operationsBinaryString(string str){
    int n =str.length();
    if (n==0)return -1;
    int ans = str[0];
    for(int i=1; i<n-1; i+=2){
        char operation = str[i];
        int binary =str[i+1]-'0';
        if(operation == 'A') ans&=binary;
        else if (operation == 'B') ans|=binary;
        else ans^=binary;
    }
    return ans;
}



int main(){
   string str;
   cin >> str;
   cout << operationsBinaryString(str);
}