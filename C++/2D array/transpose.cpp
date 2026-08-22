#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter rows : ";
    cin>>n;
    int m;
    cout<<"enter column : ";
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<<"Matrix: \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    cout<<"transpose : ";
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}