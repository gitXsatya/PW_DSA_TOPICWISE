#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(10);
    v.push_back(1);
    v.push_back(1);
    v.push_back(18);
    v.push_back(19);
    v.push_back(13);
    v.push_back(7);
    int key;
    cin>>key;
    int position;
    for(int i=0;i<v.size();i++){
        if(key==v[i]){
            position=i+1;
        }
    }
    cout<<"position of key is : "<<position;
}