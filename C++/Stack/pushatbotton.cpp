#include <iostream>
#include <stack>
using namespace std;
void print(stack <int> st){
    stack <int> gt;
    while(st.size()>0){
        gt.push(st.top());
        st.pop();
    }
    while(gt.size()>0){
        cout<<gt.top()<<" ";
        st.push(gt.top());
        gt.pop();
    }
    cout<<endl;
}
void pushatbottom(stack <int> &st, int val){
    stack <int> helper;
    while(st.size()>0){
        helper.push(st.top());
        st.pop();
    }
    st.push(val);
    while(helper.size()>0){
        st.push(helper.top());
        helper.pop();
    }
}
void pushAtaIdx(stack <int> &st, int val, int idx){
    stack <int> helper;
    while(st.size()>idx){
        helper.push(st.top());
        st.pop();
    }
    st.push(val);
    while(helper.size()>0){
        st.push(helper.top());
        helper.pop();
    }

}
int main(){
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    pushatbottom(st,70);
    print(st);
    pushAtaIdx(st,100,3);
    print(st);
}