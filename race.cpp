// organise a race so find and return value representing the total amount of money raised if the race N kilometer long
// Input =10 Output=30 return all even kilometer till N they complete

#include<bits/stdc++.h>
using namespace std;

int evenSum(int n){
     int count =0;
    for(int i=0;i<=n;i++){
        if(i%2==0){
            count+=i;
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
   
    cout<<evenSum(n);
    return 0;
}