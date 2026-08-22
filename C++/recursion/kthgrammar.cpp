#include <iostream>
#include <string>
using namespace std;
string kgram(string original,int k,string ans){
    int n=original.length();
    if(n==0){
        ans+=original;
        return ans;
    }
    int fact=1;
    for(int i=1;i<n;i++){
        fact*=i;
    }
    int idx=k/fact;
    if(k%fact==0){
        idx--;
    }
    char ch=original[idx];
    string left=original.substr(0,idx);
    string right=original.substr(idx+1);
    int q=1;
    if(k%fact==0) q=fact;
    else q=k%fact;
    return kgram(left+right,q,ans+ch);

    
}
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    cout<<"enter the kth character  :  "; 
    int k;
    cin>>k;
    string str="";
    for(int i=1;i<=n;i++){
        str+=to_string(i);
    }
    string ans="";
    string final=kgram(str,k,ans);
    cout<<final;
}