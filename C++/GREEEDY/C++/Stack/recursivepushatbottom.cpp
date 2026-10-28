#include <iostream>
#include <stack>
using namespace std;
void displayreV(stack <int> &st){
    if(st.size()==0) return;
    cout<<st.top()<<" ";
    int x = st.top();
    st.pop();
    displayreV(st);
    st.push(x);
}
void display(stack <int> &st){
    if(st.size()==0) return;
    int x = st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}
void pushatbottom(stack <int> &st, int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    pushatbottom(st,val);
    st.push(x);
}
void reverse(stack <int> &st){
    if(st.size()==1) return;
    int x = st.top();
    st.pop();
    reverse(st);
    pushatbottom(st,x);
}
int  main(){
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    st.push(80);
    //displayreV(st);
    display(st);
    // pushatbottom(st,-10);
    // display(st);
    reverse(st);
    cout<<endl;
    display(st);

}