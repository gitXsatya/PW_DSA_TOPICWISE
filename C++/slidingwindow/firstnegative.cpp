#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int ans[n-k+1];
    int previdx=-1; 
    for(int i=0;i<k;i++){
        if(arr[i]<0){
        previdx=i;
        break;
        } 
    }
    if (previdx==-1) ans[0]=1;
    else ans[0]=arr[previdx];
    int i=1;
    int j=k;
    while(j<n){
        if(previdx>=i){
            ans[i]=arr[previdx];
        }else{
            int x=previdx;
            previdx=-1; 
            for(x=i;x<=j;x++){
                if(arr[x]<0){
                    previdx=x;
                    break;
                }
            }
            if(previdx==-1) ans[i]=1;
            else ans[i]=arr[previdx];
        }
        i++;
        j++;
    }
    for(int i=0;i<n-k+1;i++){
        cout<<ans[i]<<" ";
    }

}
/*
9
2 -3 4 4 -7 -1 4 -2 6
4
-3 -3 -7 -7 -7 -1 -2 */