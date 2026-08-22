#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter row/column of square matrix : ";
    cin>>n;
    int m=n;
    int arr[n][m];
    cout<<"enter elements into the matrix : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
        
    }
    cout<<"transpose matrix : ";
    cout<<endl;
     arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=i+1;j<n;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}