#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<=x-1;i++){
        cin>>arr[i];
    }
    int max=0;
    for(int i=0;i<=x-1;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"max : "<<max;
}