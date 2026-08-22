#include <iostream>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int i=0;
    // while(i<n){
    //    int correctidx=arr[i];
    //    if(arr[correctidx]==arr[i]){
    //     cout<<arr[i];
    //     break;
    //    }
    //    else{
    //     swap(arr[i],arr[correctidx]);
    //    }
    // }method 2____>>>>

     int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int acsum=n*(n+1)/2;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<< n-(acsum-sum);

    
}