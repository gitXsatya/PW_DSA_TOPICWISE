#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int m;
    cout<<"enter a power : ";
    cin>>m;
    cout<<"calculated answer : ";
    int p=1;
    for(int i=1;i<=m;i++){
        p*=n;
    }
    cout<<p;

}