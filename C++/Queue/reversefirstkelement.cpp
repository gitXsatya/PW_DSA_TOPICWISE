#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int main(){
    queue <int> q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    stack <int> st;
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        int x = q.front();
        q.pop();
        st.push(x);
    }
    while(!st.empty()){
        int x = st.top();
        st.pop();
        q.push(x);
    }
    cout<<"After k reverseal : \n";
    for(int i=0;i<n-k;i++){
        int x = q.front();
        q.pop();
        q.push(x);
    }
    for(int i=0;i<n;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }

}