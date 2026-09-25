#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void reverse(queue <int> &q){
    stack <int> st;
    while(!q.empty()){
        int x = q.front();
        st.push(x);
        q.pop();
    }
    while(!st.empty()){
        int x = st.top();
        cout<<x<<" ";
        q.push(x);
        st.pop();
    }
}
int main(){
    queue <int> q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    reverse(q);
}