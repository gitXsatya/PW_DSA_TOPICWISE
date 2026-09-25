#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int main(){
    stack <int> st;
    queue <int> q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }
   for(int i=0;i<n/2;i++){
    st.push(q.front());
    q.pop();
   }
   for(int i=0;i<n/2;i++){
    q.push(st.top());
    st.pop();
   }
   
   for(int i=0;i<n/2;i++){
    st.push(q.front());
    q.pop();
   }
   for(int i=0;i<n/2;i++){
    q.push(st.top());
    st.pop();
    q.push(q.front());
    q.pop();
   }
   for(int i=0;i<n;i++){
    st.push(q.front());
    q.pop();
   }
   for(int i=0;i<n;i++){
    q.push(st.top());
    cout<<st.top()<<" ";
    st.pop();
   }
}