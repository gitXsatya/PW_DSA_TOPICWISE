#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector <int> visited(n,0);
    int count=0;
    for(int i=0;i<n;i++){
        int min=INT_MAX;
        int mindx=-1;
        for(int j=0;j<n;j++){
            if(visited[j]==1) continue;
            else{
                if(arr[j]<min){
                    min=arr[j];
                    mindx=j;
                }
            }
        }
        arr[mindx]=count;
        visited[mindx]=1;
        count++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}