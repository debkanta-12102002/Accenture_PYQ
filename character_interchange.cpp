//given a s string ans ch1 & ch2. return str original string ans all events in are replaced

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string changeCh(string str, char ch1,char ch2){
    
    for(int i=0; i<str.length(); i++){
        if(str[i] == ch1){
            str[i]=ch2;
        }else if(str[i] == ch2){
            str[i]=ch1;
        }
    }
    return str;
}



int main(){
    string str;
    cin >> str;
    char ch1;
    cin >> ch1;
    char ch2;
    cin >> ch2;
    cout << changeCh(str,ch1,ch2);
    return 0;
}

