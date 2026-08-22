#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    string temp;
    stringstream ss(str);
    vector <string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    
    for(int i=0;i<v.size();i++){
      cout<<v[i]<<endl;  
        
    }
    sort(v.begin(),v.end());
    int maxi=1;
    int count=1;
    for(int i=1;i<v.size();i++){
        
        if(v[i]==v[i-1]){
            count++;
        }else{
            count=1;
        }
        maxi=max(count,maxi);
    }
    count=1;
    for(int i=1;i<v.size();i++){
        
        if(v[i]==v[i-1]){
            count++;
        }else{
            count=1;
        }
        if(count==maxi){
            cout<<v[i]<<" "<<maxi;
        }
    }
    
    
}