#include <iostream>
#include <vector>
#include <climits>
using namespace std;
vector <int> dp;
vector <int> get_digits(int n){
    vector <int> send;
    while(n>0){
        if(n>0){
        int m = n%10;
        if(m!=0)send.push_back(m);
        }
        n=n/10;
    }
    return send;
}
int f(int n){
    if(n==0) return 0;
    if(n<=9) return 1;
    vector <int> digits = get_digits(n);
    int result = INT_MAX;
    for(int i=0;i<digits.size();i++){
        result = min(result,f(n-digits[i]));
    }
    return result+1;
}
int topdown(int n){
    if(n==0) return 0;
    if(n<=9) return 1;
    if(dp[n]!=-1) return dp[n];
    vector <int> digits = get_digits(n);
    int result = INT_MAX;
    for(int i=0;i<digits.size();i++){
        result = min(result,topdown(n-digits[i]));
    }
    return dp[n]=result+1;
}
int main(){
    int n;
    cin>>n;
    dp.clear();
    dp.resize(1000005,-1);
    cout<<topdown(n)<<endl;
}
