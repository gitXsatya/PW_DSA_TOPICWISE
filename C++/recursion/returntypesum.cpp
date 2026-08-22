#include <iostream>
using namespace std;
int sumn(int num){
    if(num==0){
        return 0 ;
    }
    return num+sumn(num-1);
}
int main(){
    int n;
    cin>>n;
    int ans=sumn(n);
    cout<<ans;
}