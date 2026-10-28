#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of matrix : \n";
    cin>>n;
    int arr[n][n];
    cout<<"enter elements of array : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    int high=0;
    int low=n-1;
    for(int i=0;i<n;i++){
        int start=0;
        int end=n-1;
        while(start<end){
            int temp=arr[i][start];
            arr[i][start]=arr[i][end];
            arr[i][end]=temp;
            start++;
            end--;
        }
    }
    cout<<"\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}