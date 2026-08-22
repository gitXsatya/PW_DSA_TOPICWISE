#include <iostream>
#include <vector>
using namespace std;
void combination(int arr[],vector <int> v,int size,int target,int idx){
    if(target==0){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(target<0) return;
    for(int i=idx;i<size;i++){
        v.push_back(arr[i]);
        combination(arr,v,size,target-arr[i],i);
        v.pop_back();
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector <int> v;
    int target;
    cin>>target;
    combination(arr,v,n,target,0);
}