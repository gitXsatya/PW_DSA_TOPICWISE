#include <iostream>
using namespace std;
int main(){
    int n = 26;
    long long int arr[26];
    arr[0]=1;
    arr[1]=1;
    long long int mod = 10000000007;
    for(int i=2;i<n;i++){
        arr[i]=((i%mod)*(arr[i-1]%mod))%mod;
    }
    for(int i=0;i<n;i++){
        cout<<i<<"! = "<<arr[i]<<endl;
    }
    
}