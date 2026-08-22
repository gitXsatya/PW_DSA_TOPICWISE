#include <iostream>
#include <string>
using namespace std;
string flip(string str){
    int n=str.length();
    string res="";
    int i=0;
    while(i<n){
        if(str[i]=='1'){
            str[i]='0';
            res+=str[i];
        }else{
            str[i]='1';
            res+=str[i];
        }
        i++;
    }
    return res;

}
int dtb(int n){
 string result="";
 while(n>0){
   if(n%2==0){
    result="0"+result;
   }else{
    result="1"+result;
   }
   n=n>>1;
 }
 string res=flip(result);
 int num=res.length();
 int resu=0;
 for(int i=num-1;i>=0;i--){
     char ch = res[i];
     int number = ch - '0';
     resu+= number*(1<<(num-i-1));
 }
 return resu;
   
}
int main(){
    int n;
    cin>>n;
    cout<<dtb(n);

    
}