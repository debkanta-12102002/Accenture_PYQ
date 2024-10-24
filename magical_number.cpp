//find the count the magical numbers from 1 to N. A magical number is defined by the following
// replace 0 with 1 and 1 with 2 if it is odd then this is magical number

#include<bits/stdc++.h>
using namespace std;
int magicalnumber(int n){
    if (n==0)return 0;
    int count=0;
  
    for(int i=1; i<=n;i++){
        int sum=0;
        int j=i;
        while(j>0){
            if(j&1){
                sum+=2;
            }else{
                sum+=1;
            }
            j=j>>1;
        }
        if(sum%2==1) count++;
    }
    return count;


}

int main(){
    int n;
    cin>>n;
    cout<<magicalnumber(n);
    return 0;
}