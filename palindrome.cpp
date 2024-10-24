//check the given string palindrome or not

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string isPalindrome(string s){
    int i=0;
    int j= s.size()-1;
    while(i < j){
        if(s[i] != s[j]){
            return "false";   
        }else {
            i++;
            j--;
        }
    }
    return "true";
}


int main(){
    string s;
    cin >> s;
   cout << isPalindrome(s);
    
    return 0;
}