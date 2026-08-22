#include <iostream>
#include <vector>
using namespace std;
void sorting(vector <int>&v){
    int i=0;
    int j=v.size()-1;
    for(i,j;i<j;){
        if(v[j]<0 && v[i]>0){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
        else if(v[i]<0){
            i++;
        }
        else if(v[j]>=0){
            j--;
        }
    }
}
void disp(vector <int>&n ){
    for(int i=0;i<n.size();i++){
        cout<<n[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"enter array size : ";
    cin>>n;
    vector <int>v(n);
    cout<<"enter elements : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sorting(v);
    disp(v);
}