#include <iostream>
using namespace std;
int main(){
    int n;
    int m;
    cout<<"enter row of first matrix : ";
    cin>>n;
    cout<<"enter column of first matrix : ";
    cin>>m;
    int p;
    int q;
    cout<<"enter row of second matrix : ";
    cin>>p;
    cout<<"enter column of second matrix : ";
    cin>>q;
    if(m!=p){
        cout<<"array multiplication not possible.";
    }else{
        int arr[n][m];
        cout<<"enter first matrix elements : \n";
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
            cin>>arr[i][j];
            }
            cout<<endl;
        }
         int brr[p][q];
        cout<<"enter second matrix elements : \n";
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
            cin>>brr[i][j];
            }
            cout<<endl;
        }
        int crr[n][q];
        for(int i=0;i<m;i++){
            for(int j=i;j<n;j++){

            }
        }
    }
}