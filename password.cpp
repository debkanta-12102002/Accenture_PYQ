//check the password is valid or not  checkPassword(char str[] , int n)
//return 1 -> valid || return 0 -> invalid
// 1. At least 4 character 2. must have 1 numeric 3. one cap letter 4. no space (" ") and slash('/') 5.starting char is not a number

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkPassword(string str, int n){
    if(n<4)return 0;

    if(str[0] - '0'>=0 && str[0]-'0'<=9)return 0;

    int cap=0;
    int num=0;
    for(int i=0;i<n;i++){
        if(str[i]==' ' || str[i]=='/')return 0;//check all speacial char
        if(str[i]>='A' && str[i]<= 'Z')return 1; //check capital
        if(str[i] - '0'>=0 && str[i]-'0'<=9)return 1;//check numerical
    }

    //return cap>0 && num>0;
}

int main(){
    string s;
    getline(cin , s);
    int n = s.length();
    cout << checkPassword(s,n);
    return 0;
}