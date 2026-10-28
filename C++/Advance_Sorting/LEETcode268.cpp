#include <iostream>
using namespace std;
int main (){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int i=0;
    while(i<n){
        int idx = arr[i]-1;
        if(arr[i]==arr[idx] ||arr[i]==i+1) i++;
        else swap(arr[idx],arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            cout<<i+1;
        }
    }
    
}