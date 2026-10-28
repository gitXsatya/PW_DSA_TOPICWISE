#include <iostream>
using namespace std;
int maxpowof2(int n){
    int count=0;
    int temp;
    while(n>0){
        count++;
        temp=n;
        n=(n&(n-1));
       
    }
    return temp;
}
int maxpow2_0(int n){
    n= n|(n>>1);
    n= n|(n>>2);
    n= n|(n>>4);
    n= n|(n>>8);
    n= n|(n>>16);
    return (n+1)>>1;
}
int main(){
    int n;
    cin>>n;
    cout<<maxpowof2(n)<<endl;
    cout<<maxpow2_0(n);
}