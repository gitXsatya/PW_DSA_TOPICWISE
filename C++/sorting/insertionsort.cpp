#include <iostream>
using namespace std;
int main(){
    int arr[]={50,22,-32,-55,1,2};
    int n=6;
    for(int i=1;i<=n-1;i++){
        for(int j=i;j>=1;j--){
            if(arr[j]>=arr[j-1]) break;
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}