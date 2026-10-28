#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    vector <bool> seive(maxi+1,1);
    if(maxi+1>0)seive[0]=0;
    if(maxi+1>1)seive[1]=0;
    for(int i=2;i<=sqrt(maxi);i++){
        for(int j=2*i;j<=maxi;j+=i){
            seive[j]=0;
        }
    }
    vector <int> prime;
    for(int i=0;i<=maxi;i++){
        if(seive[i]==1){
            prime.push_back(i);
        }
    }
    vector <bool> taken(prime.size(),0);
    for(int i=0;i<n;i++){
        int ele =arr[i];
        for(int j=0;j<prime.size();j++){
            if(prime[j]>ele){
                break;
            }
            if(ele % prime[j]==0){
                taken[j]=1;
            }
        }
    }
    int count=0;
    for(int i=0;i<taken.size();i++){
        if(taken[i]==1){
            count++;
        }
    }
    cout<<count;

    

}