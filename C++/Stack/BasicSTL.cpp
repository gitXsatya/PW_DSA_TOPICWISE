#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(100);
    st.push(50);
    st.push(69);
    st.push(49);
    st.push(93);
    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    stack <int> temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    while(temp.size()>0){
        int x = temp.top();
        temp.pop();
        st.push(x);
    }
    cout<<st.top();
    
 

}