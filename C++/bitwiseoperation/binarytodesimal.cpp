#include <iostream>
#include <string>
using namespace std;
int binarytodecimal(string str){
    int n=str.length();
    int result=0;
    for(int i=n-1;i>=0;i--){
        char ch= str[i];
        int num=ch-'0';
        result+=num*(1<<(n-i-1));

    }
    return result;
}
int main(){
  string str="10001010";
  cout<<binarytodecimal(str)<<"\n";
}