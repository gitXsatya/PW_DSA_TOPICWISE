#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    vector <int> v1(n);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    int k;
    cin>>k;
    // brute force
    // vector <int> ans(n-k+1,0);
    // for(int i=0;i<n-k+1;i++){
    //     for(int j=i;j<i+k;j++){
    //         if(v1[j]<0){
    //         ans[i]=v1[j];
    //         break;
    //         } 
    //     }
    // }
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
    // optimised code :
    vector <int> ans;
    queue <int> q;
    for(int i=0;i<n;i++) if(v1[i]<0) q.push(i);
    int i=0;
    while(i+k<=n){
        while(!q.empty()&&q.front()<i) q.pop();
        if(!q.empty() && q.front()>=i && q.front()<i+k) ans.push_back(v1[q.front()]);
        else ans.push_back(0);
        i++;
    }
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
}