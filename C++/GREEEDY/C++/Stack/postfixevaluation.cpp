#include <iostream>
#include <stack>
#include <string>
using namespace std;
int solve(int val1,int val2,char ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else return val1/val2;
}
int main(){
    string str = "";
    getline(cin,str);
    stack <int> st;
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

        st.push(num);
        i--;
    }
    else if(str[i] == ' ')
    {
        continue;
    }
    else
    {
        int val2 = st.top();
        st.pop();

        int val1 = st.top();
        st.pop();

        int ans = solve(val1, val2, str[i]);
        st.push(ans);
    }
}
     cout<<st.top();
}