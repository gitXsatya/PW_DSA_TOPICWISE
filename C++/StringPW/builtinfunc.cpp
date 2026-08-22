#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str="gamma";
    cout<<str.size();
    cout<<str.length();
    str.push_back('a');
    str.push_back('x');
    str.push_back('y');
    cout<<str;
    str.pop_back();
    str.pop_back();
     cout<<str;
     // + operator bhot kaam ayegi.
    string str2="gandu";
    cout<<str2<<endl;
    string str3="raghav lodu";
    str2=str2+str3; // modify
    cout<<str2<<endl;
    reverse(str2.begin(),str2.end());
    cout<<str2;
    
}