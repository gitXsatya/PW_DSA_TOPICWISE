#include <iostream>
using namespace std;
int main(){
    int n;
    int m;
    cout<<"enter rows of first matrix : ";
    cin>>n;
    cout<<"enter column of first matrix : ";
    cin>>m;
    int arr[n][m];
    int p;
    int q;
    cout<<"enter rows of second matrix : ";
    cin>>p;
    cout<<"enter column of second matrix : ";
    cin>>q;
    int brr[p][q];
    if((p!=n)&&(q!=m)){
        cout<<"Matrix addition not possible ! try again !";
        cout<<endl;
    }
    else if((p==n)&&(q==m)){
        int crr[n][m];
        cout<<"enter matrix : ";
         cout<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
            cout<<endl;
        }
         cout<<"enter matrix : ";
          cout<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>brr[i][j];
            }
            cout<<endl;
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                crr[i][j]=arr[i][j]+brr[i][j];
            }
        }
        cout<<"Final  matrix : ";
          cout<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<crr[i][j]<<" ";
            }
            cout<<endl;
        }
    }


}