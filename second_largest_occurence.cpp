// you have given an array you have to tell the count of occurrence of second largest element 
//ip->[1,2,3,4,4,5,5,5] op-> 2(cz 4 is 2nd largest & occurse two time)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// this code is for "2nd largest occurence"
/*int find2ndlargestoccurence( vector<int> nums,int n){
   
    if(n==0)return 0;
    unordered_map<int,int>mp;
     for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    int l=-1;
    int sl=-1;
    for(auto it:mp){
      
         if(it.second >l){
            sl=l;
            l=it.second;
        }
        else if(it.second >sl && it.second <l){
            sl=it.second;
        }
    }
    for(auto num:mp){
        if(num.second==sl){
            return num.first;
        }
    }
    return sl;
}*/

/*int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int ossurence = find2ndlargestoccurence(nums,n);
    cout << ossurence;
    return 0;
} */   

int find2ndlargestoccurence( vector<int>v,int n){
    if(n==0)return 0;
    int sLarge=0;
    for(int i=n-2;i>=0;i--){
        if(v[i]<v[i+1]){
            sLarge=v[i];
            break;
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(v[i]==sLarge)count++;
    }
    return count;
}
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int ossurence = find2ndlargestoccurence(nums,n);
    cout << ossurence;
    return 0;
}