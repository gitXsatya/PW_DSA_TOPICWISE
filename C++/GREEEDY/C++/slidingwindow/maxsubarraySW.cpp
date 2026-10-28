#include <iostream>
#include <climits>
using namespace std;

int main() {
	int n;
    cin>>n;
    cout<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    int k;
    cin>>k;
    cout<<endl;
    int prevsum=0;
    for(int i=0;i<k;i++){
        prevsum+=arr[i];
    }
    int maxx=prevsum;
    int i=1;
    int j=k;
    while(j<n){
        int currsum=prevsum+arr[j]-arr[i-1];
        if(currsum > maxx){
            maxx=currsum;
        }
        prevsum=currsum;
        i++;
        j++;
    }
    cout<<maxx;
	return 0;
}
