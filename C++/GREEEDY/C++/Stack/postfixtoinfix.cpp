#include <iostream>
#include <stack>
#include <string>
using namespace std;
string solve(string val1, string val2,char ch){
    string s ="";
    s+=val1;
    s.push_back(ch);
    s+=val2;
    return s;
}
int main(){
    string str = "";
    getline(cin,str);
    stack <string> st;
   for(int i = 0; i < str.length(); i++)
{
    if(str[i] >= 48 && str[i] <= 57)
    {
        int num = 0;

        while(i < str.length() &&
              str[i] >= '0' && str[i] <= '9')
        {
            num = num * 10 + (str[i] - '0');
            i++;
        }

        st.push(to_string(num));
        i--;
    }
    else if(str[i] == ' ')
    {
        continue;
    }
    else
    {
        string val2 = st.top();
        st.pop();

        string val1 = st.top();
        st.pop();

        string ans = solve(val1, val2, str[i]);
        st.push(ans);
    }
}
     cout<<st.top();
}