#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"enter size of the array : ";
    cin>>n;
    vector<int>v1(n);
    cout<<"enter numbers to input : ";
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
     for(int i=0;i<n;i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    vector <int> v2(v1.size());
    
     for(int i=0;i<n;i++){
        int j=v1.size()-1-i;
        v2[i]=v1[j];
    }
    cout<<"reverse : "<<endl;
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }


}