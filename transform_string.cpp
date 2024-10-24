// transform the string s1 to s2 
// s1 = ABD  s2 = AABCCAD

#include<bits/stdc++.h>

using namespace std;

int transformString(string s1,string s2){
    int count =0;
    unordered_map<char,int>m;
    for(int i=0; i<s2.length(); i++){
        m[s2[i]]++;
    }
    for(int i=0; i<s1.length(); i++){
        if(m.count(s1[i]) && m[s1[i]]>0){
            m[s1[i]]--;
        }
    }
    for(auto it : m){
        count = count + it.second;
    }
    return count;
}

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    cout<<transformString(s1,s2);
    return 0;
}
