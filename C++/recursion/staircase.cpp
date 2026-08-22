#include <iostream>
using namespace std;
int staircase(int n){
    if(n==1){
        return 1;
    }else if(n==2){
        return 2;
    }
    return staircase(n-1)+staircase(n-2);
}
int main(){
    int n;
    cin>>n;
    int ans=staircase(n);
    cout<<ans;
}