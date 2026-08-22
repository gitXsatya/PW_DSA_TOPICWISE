#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low=0;
    int high=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
            cout<<mid<<endl;
            cout<<arr[mid];
            break;
        }else if(arr[mid]<arr[mid+1] && arr[mid]>arr[mid-1]){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
}