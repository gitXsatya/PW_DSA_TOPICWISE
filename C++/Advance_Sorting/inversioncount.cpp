#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]>arr[j]){
    //             count++;
    //         }
    //     }
    // } it is not too good as its tc is : O(n^2) and SC: O(1)
    cout<<count;
}