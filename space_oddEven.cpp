//calculate spaces of two given string and return a string with whether their difference is odd or even ":" and count
#include <bits/stdc++.h>
using namespace std;

string solve(string s1, string s2){
    int a=0,b=0;
    for(auto i:s1){
        if(i==' ')a++;
    }
    for(auto i:s2){
        if(i==' ')b++;
    }
    int difference=abs(a-b);
    return (difference%2==0)? "even:"+ to_string(difference) : "odd:" + to_string(difference);
}


int main() {
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    cout<<solve(s1,s2);

    return 0;
}