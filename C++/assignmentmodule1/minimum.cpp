#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cout<<"enter a number  : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements to store : \n";
    int mini=INT_MAX;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
        if(arr[i]<mini){
            mini=arr[i];
        }
    }
    cout<<"minimum elements is : "<<mini;
}