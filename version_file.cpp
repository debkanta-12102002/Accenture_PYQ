//given a string contains some files along with their version.
//"File_"this is must in that not "Fil_" and not "File_12s" after that integer no char present that's invalid...."File_12"for valid.... output 12 only that integer

#include <bits/stdc++.h>
using namespace std;
int solve(int n, vector<string>arr)
{
    int maxversion=-1;
    for(int i=0;i<n;i++){
        string s=arr[i];
        if(s.size()>=6 && s.substr(0,5)=="File_"){
            int idx=5, version=0;
            bool valid=1;
            while(idx<s.size()){
                if(s[idx]>='0' && s[idx]<='9'){
                    version=version*10+(s[idx]-'0');
                }
                else{
                    valid=0;
                    break;
                }
                idx++;
            }
            if(valid) maxversion=max(maxversion,version);
        }
    }
    return maxversion;
}

int main() {
    int n;
    cin>>n;
    
    vector<string>arr(n);
    
    for(int i=0;i<n;i++)cin>>arr[i];
    
    cout<<solve(n,arr);

    return 0;
}