//given a string S and your task to return count of permutation formed by fixing by positions of the vowel present in the string
// S="abbccdee" op-30
#include <bits/stdc++.h>
using namespace std;


bool isvowel(char ch){
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        return true;
    }
    return false;
}

int fact(int n){
    if(n==0||n==1)return 1;
    int ans=1;
    while(n){
        ans=ans*n;
        n--;
    }
    return ans;
}

int main(){
    string s;
    cin>>s;
    int count =0;
    unordered_map<char,int>m;
    for(int i=0;i<s.size();i++){
        if(!isvowel(s[i])){
            count++;
            m[s[i]]++;
        }
    }
    if(count==0){
        cout<<0;
        return 0;
    }

    int combi=1;

    for(auto it:m){
        combi=combi*fact(it.second);
    }

    cout<< fact(count)/combi;
}