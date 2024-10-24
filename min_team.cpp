//organize a contest with 4 players in each team. 2 types of players experienced & freshers .conditions is 1 exp & 1 fresh should present in a team
// INPUT N(exp)=5, M(fresher)=5 OUTPUT 2
// INPUT N=9, M=1 OUTPUT 1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int fresher,experience;
    cin >>  experience >> fresher;

    int ans = (fresher + experience)/4;
    if(ans < min(fresher,experience)){
        cout << ans <<endl;
    }
    else{
        cout << min(fresher,experience)<<endl;
    }
    return 0;
}
