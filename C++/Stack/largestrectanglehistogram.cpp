#include <iostream>
#include <stack>
using namespace std;
int main(){
    int height[6]={2,1,5,6,2,3};
    int n=6;
    int width = 1;
    int pse[6];
    int nse[6];
    stack<int> st;
    pse[0]=-1;
    st.push(height[0]);
    for(int i=1;i<n;i++){
        while(st.size()>0 && st.top()>=height[i]) st.pop();
        if(st.size()==0) pse[i]=-1;
        else pse[i]=st.top();
        st.push(height[i]);
    }
    stack <int> gt;
    nse[n-1]=n;
    st.push(height[n-1]);
    for(int i=n-2;i>=0;i--){
        while(st.size()>0 && st.top()>=height[i]) st.pop();
        if(st.size()==0) nse[i]=n;
        else nse[i]=st.top();
        st.push(height[i]);
    }
    for(int i=0;i<n;i++){
        cout<<nse[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<pse[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<nse[i]-pse[i]-1<<" ";
    }
}