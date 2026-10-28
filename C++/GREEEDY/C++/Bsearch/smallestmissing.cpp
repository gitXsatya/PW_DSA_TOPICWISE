#include <iostream>
using namespace std;
int main(){
  int arr[9]={0,1,2,3,4,6,7,9,10};
  int n=9;
  for(int i=0;i<=n;i++){
        if(i!=arr[i]){
            cout<<i;
            break;
        }
  }
}       