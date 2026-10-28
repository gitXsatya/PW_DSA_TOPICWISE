#include <iostream>
using namespace std;
void goodmorn(int n){
    if(n==0){
        return;
    }
    cout<<"good morning."<<endl;
    goodmorn(n-1);
}
int main(){
    int n;
    cin>>n;
    goodmorn(n);
}