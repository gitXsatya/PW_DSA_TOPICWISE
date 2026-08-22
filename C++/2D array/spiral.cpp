#include <iostream>
using namespace std;
int main(){
    int row;
    cout<<"enter required rows : ";
    cin>>row;
    int column;
    cout<<"enter required cols : ";
    cin>>column;
    cout<<"enter elements of the matrix : \n";
    int arr[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    
    }
    int te=row*column;
    cout<<endl;

    //spriral
    cout<<"SPIRAL SEQUENCE : ";
    int count=0;
    int minrow=0,mincol=0;
    int maxrow=row-1,maxcol=column-1;
    while(minrow<=maxrow && mincol<=maxcol){
    for(int i=mincol;i<=maxcol && count<te;i++){
        cout<<arr[minrow][i]<<" ";
        count++;
    }
    minrow++;
    for(int i=minrow;i<=maxrow && count<te ;i++){
        cout<<arr[i][maxcol]<<" ";
        count++;
    }
    maxcol--;
    for(int i=maxcol;i>=mincol && count<te ;i--){
        cout<<arr[maxrow][i]<<" ";
        count++;
    }
    maxrow--;
    for(int i=maxrow;i>=minrow && count<te;i--){
        cout<<arr[i][mincol]<<" ";
        count++;
    }
    mincol++;
}
    


}