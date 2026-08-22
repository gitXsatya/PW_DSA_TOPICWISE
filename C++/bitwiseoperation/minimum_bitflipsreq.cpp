#include <iostream>
#include <string>
using namespace std;
string desitobin(int num){
    string res="";
    while(num>0){
        if(num%2==0){
            res='0'+res;
        }else{
            res='1'+res;
        }
        num=num>>1;
    }
    return res;
}
int main(){
    int num1;
    cin>>num1;
    int num2;
    cin>>num2;
    string str1=desitobin(num1);
    string str2=desitobin(num2);
    cout<<str1<<endl<<str2<<endl<<__builtin_popcount(num1 ^ num2);
}