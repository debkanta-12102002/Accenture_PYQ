//input string S. delete all the vowel occurence in the string which occur only between two consonant return the modified string
//ip- "applesarefallingfromtheskies" op- "applsrfllngfrmthskies"

#include <bits/stdc++.h>
using namespace std;

bool isvowel(char ch){
    return ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
}


string solve(string s){
    string ans="";
    ans+=s[0];
    for(int i=1;i<s.size()-1;i++){
        if(isvowel(s[i]) && !isvowel(s[i-1]) && !isvowel(s[i+1])){
            continue;
        }
        else{
            ans+=s[i];
        }
    }
    ans+=s[s.size()-1];
    return ans;
}


int main() {
    string s;
    cin>>s;
    
    cout<<solve(s);
}