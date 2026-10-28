#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int countprime( vector <bool> &seive){
    int n=seive.size()-1;
    for(int i=2;i<=sqrt(n);i++){
        for(int j=2*i;j<n;j+=i){
            seive[j]=0;
        }
    }
    if(n<=2){
        return 0;
    }
    int count=0;
    for(int i=2;i<n;i++){
        if(seive[i]==1){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    vector <bool> seive(n+1,1);
    seive[0]=0;
    seive[1]=0;
    int totalprime = countprime(seive);
    cout<<totalprime;
}