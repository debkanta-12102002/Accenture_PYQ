//playing toss game it has some rules "for each head get 2 point & each tails loss 1 point if 3 head occur ina arow the win" retuen the score 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int tossWin(string str){
    //hthhtththhht
    int count=0;
    int score=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='h'||str[i]=='H'){
            score+=2;
            count++;
        }
        else if(str[i]=='t'||str[i]=='T'){
            score-=1;
            count=0;
        }
        if(count == 3)return score;
    }
    return score;
}
int main(){
    string str;
    getline(cin,str);
    cout<<tossWin(str);
    return 0;
}