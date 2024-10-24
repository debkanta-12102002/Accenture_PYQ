//binary operation AND XOR OR e.g.- both of the string are equal
//very repeated question
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string binaryAnd(string s1, string s2){
    string res="";
    for(int i=0; i< s1.length(); i++){
        if(s1[i] == '1' && s2[i] == '1'){
            res+='1';
        }else{
            res+='0';
        }
    }
    return res;
}

string binaryOr(string s1, string s2){
    string res="";
    for(int i=0; i< s1.length(); i++){
        if(s1[i] == '1' || s2[i] == '1'){
            res+='1';
        }else{
            res+='0';
        }
    }
    return res;
}

string binaryXor(string s1, string s2){
    string res="";
    for(int i=0; i< s1.length(); i++){
        if(s1[i] == s2[i]){
            res+='0';
        }else{
            res+='1';
        }
    }
    return res;
}

string toUpper(const string& str) {
    string upperStr = str;
    transform(upperStr.begin(), upperStr.end(), upperStr.begin(), ::toupper);
    return upperStr;
}


int main(){
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    string op;
    cin >> op;
    op = toUpper(op);
    if(op == "AND"){
        cout << binaryAnd(s1,s2) << endl;
    }
    else if(op == "OR"){
        cout << binaryOr(s1,s2) << endl;
    }
    else{
        cout << binaryXor(s1,s2) << endl;
    }
    return 0;
}
