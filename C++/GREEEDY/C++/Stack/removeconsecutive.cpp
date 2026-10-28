#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
string removeduplicates(string str){
     stack <char> st;
    for(int i=0;i<str.length();i++){
        if(st.empty()) st.push(str[i]);
        else{
            if(str[i]==st.top()) continue;
            else st.push(str[i]);
        }
    }

    string made = "";
    while (!st.empty()) {
        made += st.top();
        st.pop();
    }

    reverse(made.begin(), made.end());
    return made;
}

int main(){
    string str = "";
    cin>>str;
    str = removeduplicates(str);
    cout<<str;
    return 0;
}