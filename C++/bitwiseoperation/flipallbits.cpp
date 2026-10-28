#include <iostream>
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
string dtb(int n){
 string result="";
 while(n>0){
   if(n%2==0){
    result="0"+result;
   }else{
    result="1"+result;
   }
   n=n>>1;
 }
 cout<<result<<endl;
 string res=flip(result);
 return res;
   
}
int main(){
    int n;
    cin>>n;
    cout<<dtb(n);

    
}