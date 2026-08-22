#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string str="ABCDxyzaa";
    string str2="";
    for(int i=0;i<str.length();i++){
        char ch1=str[i];
        if(ch1>'Z'){
            str2+=ch1;
        }
    }
    cout<<str2<<endl;
    sort(str2.begin(),str2.end());
    cout<<str2;
}