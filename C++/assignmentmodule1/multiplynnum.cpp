#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int arr[n];
    int totalmul=1;
    cout<<"enter your elements : "<<endl;
    for(int i=0;i<=n-1;i++){
        cout<<"enter element "<<i+1<<" : ";
        cin>>arr[i];
        totalmul=totalmul*arr[i];
    }
    cout<<"total multilication of n elements of an array : "<<totalmul;
   
}