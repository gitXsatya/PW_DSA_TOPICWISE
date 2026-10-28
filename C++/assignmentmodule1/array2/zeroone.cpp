#include <iostream>
#include <vector>
using namespace std;
void sort01(vector <int>&v){
    int noo=0,noz=0;
    for(int i=0;i<v.size();i++){
            if(v[i]==0){
                noz++;
            }
            else{
                noo++;
            }
    }
    for(int i=0;i<v.size()-1;i++){
        if(i<noz){
            v[i]=0;
        }else{
            v[i]=1;
        }
    }
}
int main(){
    
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector <int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    sort01(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}