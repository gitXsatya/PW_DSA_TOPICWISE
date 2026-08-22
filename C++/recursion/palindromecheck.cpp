#include <iostream>
#include <string>
using namespace std;
string getcheck(string original,string empty){
    if(original=="")
        return "";
    return getcheck(original.substr(1),empty)+original[0];

}
int main(){
    string str;
    cin>>str;
    string str2="";
    string ans=getcheck(str,str2);
    if(ans==str){
        cout <<"true";
    }else{
        cout<<"false";
    }

}