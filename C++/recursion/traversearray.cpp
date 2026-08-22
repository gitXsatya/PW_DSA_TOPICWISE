#include <iostream>
using namespace std;
void recur(int arr[],int size,int idx){
    if(idx==size){
        return;
    }
   cout<<arr[idx]<<" ";
   recur(arr,size,idx+1);


}
int main(){
    cout<<"enter array size : ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    recur(arr,n,0);
}