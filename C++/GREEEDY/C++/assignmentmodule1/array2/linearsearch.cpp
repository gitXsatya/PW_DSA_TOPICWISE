#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter expected array size : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements: ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter key to search";
    cin>>key;
    bool flag=0;
    for(int i=0;i<=n-1;i++){
        if(key==arr[i]){
            flag=1;
            
        }
    }
    if(flag==0){
            cout<<"not present.";
    }
    else{
        cout<<"element founded ";
    }
    
}