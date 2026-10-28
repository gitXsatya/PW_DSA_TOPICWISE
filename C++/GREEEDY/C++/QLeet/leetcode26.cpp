#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v={0,0,1,1,1,2,2,3,3,4};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int i=1;
    int j=1;
    while(j<v.size()){
        if(v[j]!=v[j-1]){
            v[i]=v[j];
            i++;
            j++;
        }
        else if(v[j]==v[j-1]){
            j++;
        }
    }
    v.resize(i);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}