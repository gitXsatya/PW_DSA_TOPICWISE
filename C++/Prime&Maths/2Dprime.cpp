#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool isprime(int num){
    if(num==1){
        return false;
    }
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int mx=0;
    vector <vector <int>> V(n,vector <int> (n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>V[i][j];
        }
    }
    for(int i=0;i<n;i++){
        if(isprime(V[i][i])){
            mx=max(mx,V[i][i]);
        }
        if(isprime(V[i][n-i-1])){
            mx=max(mx,V[i][n-i-1]);
        }
    }
    cout<<mx;
}