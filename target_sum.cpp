//given an array we have to return the pair whose sum is equal to the target and maximum product
// [11 1 2 8 10 11 15 7] op-> [10,8] sum is equal & 1st idx also greater and maximum product

#include<bits/stdc++.h>
using namespace std;

auto comp=[](int a,int b){ // decending order sorting
    return a>b;
};

void solve(int n, vector<int>arr,int target){
    vector<int>ans(2,0);
    int prod=0;
    sort(arr.begin(),arr.end(),comp);
    int st=0;
    int en=n-1;
    while(st<en){
        int sum=arr[st]+arr[en];
        if(sum==target){
            if(prod<arr[st]*arr[en]){
                prod=arr[st]*arr[en];
                ans[0]=arr[st];
                ans[1]=arr[en];
            }
            st++;
            en--;
        }
        else if(sum<target)en--;
        else st++;
    }

    cout<<ans[0]<<" "<<ans[1]<<endl;
}




int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int target;
    cin>>target;
    solve(n,arr,target);
    return 0;
}