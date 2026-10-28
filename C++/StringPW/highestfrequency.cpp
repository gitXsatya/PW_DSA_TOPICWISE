#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    string str;
    cin>>str;
    vector <int> v(26,0);
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        int ascii=(int)ch;
        v[ascii-97]++;
    }
    int mx=0;
     for(int i=0;i<26;i++){
       if(v[i]>mx){
        mx=v[i];
       }
    }
    char chr;
     for(int i=0;i<26;i++){
      if(mx==v[i]){
        int ascii=i+97;
         chr=(char)ascii;
        
      }
    }
    cout<<chr<<mx;

    
}