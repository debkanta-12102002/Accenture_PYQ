//you are given a string S find and return count permutation formed the position of the vowels present in string
//ip->ABC [A is a vowel so BC combo BC , CB so 2 ]op->2
#include<bits/stdc++.h>
using namespace std;

int factorial(int num){
    int ans=1;
    for(int i=1;i<=num;i++) ans=ans*i;
    return ans;
}

int permutation(string s){
    if(s.length()==0)return 0;
    unordered_map<char,bool>m;
    m['a']=true;
    m['e']=true;
    m['i']=true;
    m['o']=true;
    m['u']=true;
    m['A']=true;
    m['E']=true;
    m['I']=true;
    m['O']=true;
    m['U']=true;
    int count=0; 
    for(int i=0;i<s.length();i++){
        if(m.count(s[i])!=true)count++;
    }
    if(count==0)return 0;
    return factorial(count);

}

int main(){
    string s;
    cin>>s;
    cout<< permutation(s);
}