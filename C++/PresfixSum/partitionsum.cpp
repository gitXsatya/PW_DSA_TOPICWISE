#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    int idx=-1;
    for(int i=0;i<n-1;i++){
        if(arr[n-1]==2*arr[i]){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        cout<<"Can't be partitioned.";
    }
    else {
        cout<<"Can be the partitioned after index : "<<idx+1;
    }
}