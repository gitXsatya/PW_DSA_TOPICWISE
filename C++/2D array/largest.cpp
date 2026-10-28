#include <iostream>
#include <climits>
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
    int max=INT_MIN;
    int sum=0;
    cout<<"enter student roll number and marks : ";
    cout<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"resultant table : ";
    cout<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<arr[i][j]<<" ";
            if(arr[i][j]>max){
                max=arr[i][j];
            }
            sum+=arr[i][j];
        }
     cout<<endl;
    }
    cout<<endl;
    cout<<"Largest element : "<<max;
    cout<<endl;
    cout<<"sum : "<<sum;
}