#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
string lcs(string &x,string &y,int m,int n,vector <vector <int>> &dp){
    for(int i=1;i<dp.size();i++){
        for(int j=1;j<dp[0].size();j++){
            if(x[i-1]==y[j-1]) dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    int i = m,j=n;
    string s="";
    while(i>0 && j>0){
        if(x[i-1]==y[j-1]){
            s.push_back(x[i-1]);
            i--;
            j--;
        }
        else{
            if(dp[i-1][j]>dp[i][j-1]){
                i--;
            }
            else j--;
        }
    }
    reverse(s.begin(),s.end());
    return s;
}

int main(){
    string x,y;
    cin>>x>>y;
    int m,n;
    m=x.length();
    n=y.length();
    vector <vector <int>> dp(m+1,vector<int>(n+1,0));
    string ans=lcs(x,y,m,n,dp);
    cout<<ans;
}