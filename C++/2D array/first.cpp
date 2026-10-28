#include <iostream>
using namespace std;
int main(){
    int row;
    int column;
    cout<<"enter total rows : ";
    cout<<endl;
    cin>>row;
    cout<<"enter total column : ";
    cout<<endl;
    cin>>column;
    int arr[row][column];
    cout<<"enter student roll number and marks : ";
    cout<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<<"resultant table : ";
    cout<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<arr[i][j]<<" ";
        }
     cout<<endl;
    }

}