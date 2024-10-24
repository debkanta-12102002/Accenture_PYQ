// anagram str1 = listen  str2 = silent  yes
// str = hello  str2 = world  no


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string isAnagram(string s1, string s2){
    if(s1.length() != s2.length()) return "no";
    sort(s1.begin() , s1.end());
    sort(s2.begin() , s2.end());

   return  s1 == s2 ? "yes" : "no";
}

int main(){
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    cout << isAnagram(s1,s2);
    return 0;
}