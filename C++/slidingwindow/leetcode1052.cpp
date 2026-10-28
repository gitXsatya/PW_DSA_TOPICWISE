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
    int gru[n];
    for(int i=0;i<n;i++){
        cin>>gru[i];
    }
    int minute;
    cin>>minute;
    int prevlos=0;
    for(int i=0;i<minute;i++){
        if(gru[i]==1){
            prevlos+=arr[i];
        }
    }
    int maxlos=prevlos;
    int midx=0;
    int i=1;
    int j=minute;
    while(j<n){
        int currlos=prevlos;
        if(gru[j]==1) currlos+=arr[j];
        if(gru[i-1]==1) currlos-=arr[i-1];
        if(currlos>maxlos){
            maxlos=currlos;
            midx=i;
        }
        prevlos=currlos;
        i++;
        j++;
    }
    for(int i=midx;i<midx+minute;i++){
        gru[i]=0;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(gru[i]==0){
            ans+=arr[i];
        }
    }
    cout<<ans;

}