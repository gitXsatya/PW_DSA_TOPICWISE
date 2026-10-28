#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
#include <iomanip>
using namespace std;
bool cmp(pair <int,int> &p1,pair <int,int> &p2){
    // pair <int,int> ->first (value) ->second (weight)
    double r1 = (p1.first*1.0)/(p1.second*1.0);
    double r2 = (p2.first*1.0)/(p2.second*1.0);
    return r1>r2;
}
double fractionalknapsack(vector <int> &profit,vector <int> &weights,int n,int W){
    vector <pair <int,int>> arr;
    for(int i=0;i<n;i++){
        arr.push_back({profit[i],weights[i]});
    }
    sort(arr.begin(),arr.end(),cmp);
    double result=0;
    for(int i=0;i<n;i++){
        if(arr[i].second<=W){
            result+=arr[i].first;
            W-=arr[i].second;
        }
        else {
            result+=((arr[i].first*1.0)/(arr[i].second*1.0))*W;
            W=0;
            break;
        }
    }
    return result;
}
int main(){
    int n,W;
    cin>>n>>W;
    vector <int> profit(n);
    vector<int> weights(n);
    for(int i=0;i<n;i++) cin>>profit[i];
    for(int i=0;i<n;i++) cin>>weights[i];
    cout << fixed << setprecision(5)<< fractionalknapsack(profit,weights,n,W);
    return 0;


}