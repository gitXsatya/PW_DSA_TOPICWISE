#include <iostream>
using namespace std;
int totalsetbit(int n){
   int result= __builtin_popcount(n);
    return result;
}
int totalsetbit2(int n){
    int count=0;
    while(n>0){
        count++;
        n=(n&(n-1));
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    cout<<totalsetbit(n)<<endl;
    cout<<totalsetbit2(n);
}