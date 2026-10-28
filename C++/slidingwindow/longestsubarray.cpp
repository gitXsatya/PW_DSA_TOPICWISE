#include <iostream>
#include <climits>
using namespace std; 
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    int j=0;
    int maxelent=INT_MIN;
    int ans;
    int len=0;
    while(j<n){
        if(arr[j]>maxelent){
            maxelent=arr[j];  
            ans=j; 
        }else{
            len=j-i;
            i++;    
        }
        j++;
    }
    len=j-i;
    cout<<maxelent<<" of length : "<<len-ans;


   
}