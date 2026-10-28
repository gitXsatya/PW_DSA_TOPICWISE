#include <iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int first,second;
    int sum=0;
    bool found=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            sum=arr[i]+arr[j];
            if(sum==key){
                first=arr[i];
                second=arr[j];
                break;
                found=true;
            }
            
        }
        if(found){
                break;
        }
    
    }
    cout<<first<<second;
	return 0;
}