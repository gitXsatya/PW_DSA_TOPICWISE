#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of elements : ";
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<=n-1;i++){
        cout<<"enter element "<<" "<<i+1<<" : ";
        cin>>arr[i];
       
    }
    for(int i=0;i<=n-1;i++){
        sum=sum+arr[i];
    }
    cout<<"sum of all the elements is : "<<""<<sum;
}