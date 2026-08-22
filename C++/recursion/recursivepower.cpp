#include <iostream>
using namespace std;
int power(int a,int b){
    if(b==0){
        return 1;
    }
    return a*power(a,b-1);
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int ans=power(n,m);
    cout<<ans;
}
