#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int total=0;
    for(int i=0;i<m;i++){
        int binary = 0;
        for(int j=0;j<n;j++){
                binary = binary * 2 + arr[i][j];
        }
        total+=binary;
    }
    cout<<total;
}