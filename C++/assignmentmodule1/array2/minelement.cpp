#include <iostream>
#include <climits>
using namespace std;
int main(){
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<=x-1;i++){
        cin>>arr[i];
    }
    int min=INT_MAX;
    for(int i=0;i<=x-1;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"min : "<<min;
}