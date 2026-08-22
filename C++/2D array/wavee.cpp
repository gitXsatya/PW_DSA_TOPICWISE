#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows/columns : ";
    cin>>n;
    int arr[n][n];
    //input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
        cout<<"\n";
    }
    cout<<"\n";
    //printing 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    //logic
    cout<<"\n";
   
    for(int i=0;i<n;i++){
        int end=n-1;
        for(int j=0;j<n;j++){
            if(i%2==0){
                cout<<arr[i][j]<<" ";
            }else{
                cout<<arr[i][end]<<" ";
                end--;
            }
        }
        cout<<"\n";
    }
    return 0;
}