#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag = false;
    if(n==1){
        cout<<"NOT PRIME";
        return 0;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout << "NOT PRIME";
            flag = true;
            break;
        }
    }
    if(flag!=true)
    cout<<"PRIME";
    return 0;
}