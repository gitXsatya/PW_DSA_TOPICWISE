#include <iostream>
#include <string>
using namespace std;
string cns(int n){
    if(n==1){
        return "1";
    }
    string prev=cns(n-1);
    string ans="";
    int freq=1;
    for(int i=1;i<prev.length();i++){
        if(prev[i]==prev[i-1]){
            freq++;
        }else{
            ans+=to_string(freq);
            ans+=prev[i-1]; 
            freq=1;
        }
    }
    ans += to_string(freq);
    ans += prev.back();

    return ans;
}

int main() {
	int n;
    cin>>n;
    cout<<cns(n);
	return 0;
}
