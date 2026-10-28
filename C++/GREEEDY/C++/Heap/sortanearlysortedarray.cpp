#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){
    priority_queue <int,vector <int>,greater <int>> pq;
    vector <int> ans;
    int arr[]={10,9,8,7,4,70,60,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=4;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>=k){
            int temp = pq.top();
            pq.pop();
            ans.push_back(temp);
        }
    }
    while(pq.size()>0){
        int temp=pq.top();
        ans.push_back(temp);
        pq.pop();
    }
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
}