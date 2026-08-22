#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    vector <string> v;
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int max=0;
    int pos;
    for(int i=0;i<v.size();i++){
        int race=stoi(v[i]);
        if(race>max){
            max=race;
            pos=i;
        }

    }
    cout<<max<<" at position : "<<pos;
    

}