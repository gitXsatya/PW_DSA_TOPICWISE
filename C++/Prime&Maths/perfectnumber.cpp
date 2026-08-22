#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0){
            sum+=i;
        }    
    }
    for(int i=sqrt(n);i>1;i--){
        if(n%i==0){
            sum+=(n/i);
        }
    }
    if(sum==n)cout<<"Perfect Number";
    else cout<<"Not a Perfect Number";
}