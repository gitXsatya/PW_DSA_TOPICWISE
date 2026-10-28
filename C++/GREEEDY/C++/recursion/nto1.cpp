#include <iostream>
using namespace std;
void ntoone(int n){
    if(n==1){
        cout<<n<<endl;
        return;
    }
    cout<<n<<endl;
    ntoone(n-1);
}
int main(){
    int n;
    cin>>n;
    ntoone(n);
}