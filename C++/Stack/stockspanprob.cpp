#include <iostream>
#include <stack>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int output[n];
    output[0]=1;
    stack <int> st;
    st.push(0);
    for(int i=1;i<n;i++){
        while(st.size()>0 &&arr[st.top()]<=arr[i]) st.pop();
        if(st.size()==0) output[i]=-1;
        else output[i]=st.top();
        output[i]=i-output[i];
        st.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<output[i]<<" ";
    }
}