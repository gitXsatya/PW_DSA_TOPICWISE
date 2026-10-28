#include <iostream>
#include <string>
using namespace std;
int main(){
    string shopsy="YYNY";
    int prefix[shopsy.length()+1];
    int suffix[shopsy.length()+1];
    int pencount=0;
    if(shopsy[0]=='N'){
        for(int i=0;i<shopsy.length();i++){
            if(shopsy[i]=='N'){
                pencount++;
            }
        }
        cout<<pencount;
    }
    else if(shopsy[0]=='Y'){
        prefix[0]=0;
        for(int i=1;i<shopsy.length();i++){
            if(shopsy[i]!='N'){
                prefix[i]=0;
            }
            else{
                prefix[i]+=prefix[i-1];
            }
        }
        suffix[shopsy.length()-1]=0;
        for(int i=n-2;i>=0;i--){
            if(shopsy[i]!='N'){
                prefix[i]=0;
            }
            else{
                prefix[i]+=prefix[i-1];
            }
        }
    }
}