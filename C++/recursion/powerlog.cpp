#include <iostream>
using namespace std;
int powlog(int a,int b){
        if(b==1){
            return a;
        }
        int answ=powlog(a,b/2);
        if(b%2==0)
        return answ*answ;
        else
        return answ*answ*a;
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int ans=powlog(n,m);
    cout<<ans;
}