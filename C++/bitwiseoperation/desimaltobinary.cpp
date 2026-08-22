#include <iostream>
#include <string>
using namespace std;
string desimaltobinary_(int n){
    string result="";
   
   while(n>0){
        if(n%2==0){
            result="0"+result;
        }else{
            result="1"+result;
        }
        n=n>>1;
    }
    return result;

}
int main(){
    int n;
    cin>>n;
    cout<<desimaltobinary_(n);
}