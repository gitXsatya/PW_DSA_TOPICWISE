#include <bits/stdc++.h>
using namespace std;
int main(){
     int k=2;
    priority_queue <int> pq;
    int arr[]={10,20,-4,6,18,24,105,118};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top();
    

}