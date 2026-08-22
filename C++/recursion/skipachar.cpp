#include <iostream>
#include <string>
using namespace std;
int main(){
    string str1="aakriti singh";
    string str2="";
    for(int i=0;i<str1.length();i++){
        if(str1[i]!='a'){
            str2+=str1[i];
        }
    }
    cout<<str2;
}