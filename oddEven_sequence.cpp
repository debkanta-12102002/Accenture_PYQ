// jack has an array the numbers odd and even,return a string with lables odd even in sequence
// [1,2,3,4,5,6] output-> oddevenoddevenoddeven

#include<bits/stdc++.h>
using namespace std;

string oddevenSequence(int arr[],int n){
    string check="";
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            check+="even";
        }
        else{
            check+="odd";
        }
    }
    return check;

}

int main(){
    int n=6;
    int arr[n]={1,2,3,4,5,6};
    cout << oddevenSequence(arr,n);
    return 0;
}