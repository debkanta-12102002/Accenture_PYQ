//reverse a string word wise 

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void reverse_string(string s){
    vector<string>arr;
    string res ="";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            arr.push_back(res);
            arr.push_back(" ");
            res ="";
        }else{
            res += s[i];
        }
    }
    arr.push_back(res);
    for(int i=arr.size()-1; i>=0; i--){
        cout << arr[i];
    }
  cout << endl;
}

int main(){
    string s ;
    getline(cin, s); //getline(cin, name) that is used for take input from user
    reverse_string(s);
    return 0;
}

