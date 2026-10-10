#include <iostream>
#include <vector>
#include <climits>
using namespace std;
vector <int> coins;
vector <int> dp(1000005,-2);
int mincoin(int target)
{   
    if(target==0) return 0;
    int result = INT_MAX;
    if(dp[target]!=-2) return dp[target];
    for(int i=0;i<coins.size();i++){
        if(target>=coins[i]){
            result=min(result,mincoin(target-coins[i])); 
        }
    }
    if(result==INT_MAX)return dp[target]=INT_MAX;
    return dp[target]=result+1;
}
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        coins.push_back(x);    
    }
    int num =mincoin(target);
    if(num==INT_MAX) cout<<"-1"<<endl;
    else cout<<num<<endl;
}