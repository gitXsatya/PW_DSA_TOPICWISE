#include <iostream>
using namespace std;
int main(){
    int n=6;
    int fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    cout<<fact;
}