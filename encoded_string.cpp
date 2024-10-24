//given a string 0 1 . the sequence is encoded english word. return the original word 
// A - 1 B-11 C-111 D-1111
//ip-11101111011111 op-CDE
#include<bits/stdc++.h>
using namespace std;
string encodedString(string s){
    if(s.length()==0)return "";
    string ans="";
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            count++;
        }
        else{
            if(count>0){
                ans+=(char)(64+count);
                count =0;
            }
        }
    }
    if(count>0){
    ans+=(char)(64+count);
    count =0;
    }
    return ans;
}


int main(){
    string s = "101101110";
    cout << encodedString(s);
}