#include <iostream>
using namespace std;
void oneton(int i,int n){
    cout<<i;
      if(i>=n){
        return;
    }
    oneton(i+1,n);


}
int main(){
    int n;
    cin>>n;
    oneton(1,n);
}