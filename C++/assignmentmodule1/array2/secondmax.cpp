#include <iostream>
#include <climits>
using namespace std;
int main(){
    int max=INT_MIN;
    int smax=INT_MIN;
    int A[5]={1,2,3,4,5};
    for(int i=0;i<=4;i++){
       if(A[i]>max){
        max=A[i];
       }
    }
    for(int i=0;i<=4;i++){
       if(smax<A[i]&&A[i]!=max){
        smax=A[i];
       }
    }
    cout<<"smax : "<<smax;
}