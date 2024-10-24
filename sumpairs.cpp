//given an array of integers and a sum. print all pairs in the array whose sum  is equal to sum



#include <iostream>
using namespace std;
void printSum(int arr[],int sum,int n){
    for(int i=0;i<n-2;i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j] == sum){
                cout << "(" << arr[i] << "," << arr[j] << ")";
                
            }
        }
    }
}


int main() 
{   int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     int sum;
     cin>>sum;
   printSum(arr,sum,n);
  
  
    return 0;
}