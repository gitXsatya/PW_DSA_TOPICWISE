#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    cout<<str;
    for(int i=0;i<str.size();i++){
        if(i%2==0){
            str[i]='a';
        }
    }
    cout<<endl;
    cout<<str;
}