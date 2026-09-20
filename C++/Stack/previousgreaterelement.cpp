#include <iostream>
#include <stack>
using namespace std;
int main(){ 
    int n ;
    cin>>n;
    int arr[n];
    int ans[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // METHOD GOOD USING STACK. TC : O(n) (pop , ans , push)
    // SC = O(n) and forward traveersing
    stack <int> st;
    ans[0]=-1;
    st.push(arr[0]);
    for(int i = 1;i<n;i++){
        // pop all the elements smaller than equal to arr[i]
        while(st.size()>0 && st.top()<=arr[i]) st.pop();
         // mark the ans;
         if(st.size()==0) ans[i]=-1;
         else ans[i]=st.top();
         st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
     
}