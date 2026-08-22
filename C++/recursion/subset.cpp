#include <iostream>
#include <string>
using namespace std;
void subset(string original, string ans,int idx){
    if(idx==original.length()){
        cout<<ans<<endl;
        return;
    }
    char ch=original[idx];
    subset(original,ans+ch,idx+1);
    subset(original,ans,idx+1);
    
}
int main(){
    string str = "abc";
    string str2="";
    subset(str,str2,0); 
}