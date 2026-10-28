#include <iostream>
using namespace std;
void onetonum(int num){
    if(num==0){
        return;
    }
    onetonum(num-1);
    cout<<num<<endl;
}
int main(){
    int n;
    cin>>n;
    onetonum(n);
}