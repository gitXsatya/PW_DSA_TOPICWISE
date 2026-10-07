#include <bits/stdc++.h>
#define inf INT_MAX
using namespace std;
    
 int fud(int n,vector <int> &dp){
    if(n==1) return 0;
    if(n==2||n==3) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=1+min({fud(n-1,dp),(n%2==0)?fud(n/2,dp):inf,(n%3==0)? fud(n/3,dp):inf});
 }
 int f(int n){
    if(n==1) return 0;
    if(n==2||n==3) return 1;
    return 1+min({f(n-1),(n%2==0)?f(n/2):inf,(n%3==0)? f(n/3):inf});
 }
 int tdu(int n,vector <int> &dp){
    
    dp[0]=0;
    dp[1]=0;
    dp[2]=dp[3]=1;
    for(int i=4;i<n+1;i++){
        dp[i]=1+min({dp[i-1],(i%2==0)?dp[i/2]:inf,(i%3==0)? dp[i/3]:inf});
    }
    return dp[n];
 }
int main(){
    int n;
    cin>>n;
    vector <int> dp(n+1,-1);
    cout<<f(n)<<endl;
    dp.clear();
    dp.resize(n+1,-1);
    cout<<fud(n,dp)<<endl;
    dp.clear();
    dp.resize(n+1,-1);
    cout<<tdu(n,dp)<<endl;

}