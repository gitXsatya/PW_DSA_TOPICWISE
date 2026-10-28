#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string x;
    cin>>x;
    string y = x;
    int m = x.length();
    int n = y.length();
    vector <vector <int>> dp(m+1,vector <int> (n+1,0));
    for(int i=1;i<dp.size();i++){
        for(int j=1;j<dp[0].size();j++){
            if(x[i-1]==y[j-1] && i!=j){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    cout<<dp[m][n];

}