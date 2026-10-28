#include <iostream>
using namespace std;
int main (){
    int arr[]={5,3,4,2,1};
    int n=5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //cycle sort;
    int i=0;
    while(i<n){
        int correctidx=arr[i]-1;
        if(i==correctidx) i++;
        else swap(arr[i],arr[correctidx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}