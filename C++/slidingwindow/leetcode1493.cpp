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
    int len=INT_MIN;
    int maxlen=INT_MIN;
    int i=0;
    int j=0;
    int k=1;
    int count=0;
    while(j<n){
        if(arr[j]==1){
            j++;
        }
        else {
            if(count<k){
                count++;
                j++;
            }else{
                len=j-i;
                maxlen=max(maxlen,len);
                while(arr[i]==1) i++;
                i++;
                j++;
            }
        }
        len=j-i;
        maxlen=max(maxlen,len);

        
    }
    cout<<maxlen-1;

}