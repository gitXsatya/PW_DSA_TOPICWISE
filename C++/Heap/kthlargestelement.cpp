#include <iostream>
#include <queue>
using namespace std;
int main(){
    int k=4;
    priority_queue <int,vector <int>,greater<int>> pq;
    int arr[]={1,2,3,4,5,6,7,8,9,10,-10,-11,1000,10,22,12,11,11,80,893,9803};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top();
}