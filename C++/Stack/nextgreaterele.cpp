#include <iostream>
#include <stack>
using namespace std;
int main(){ 
    int n ;
    cin>>n;
    int ans[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // METHOD BRUTE FORCE TC : O(n^2) SC : O(1)

    /*for(int i=0;i<n;i++){
        ans[i]=-1;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                ans[i]=arr[j];
                break;
            }
            else{
                continue;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }*/

    // METHOD GOOD USING STACK. TC : O(n) (pop , ans , push)
    // SC = O(n) and reverse traveersing
    stack <int> st;
    ans[n-1]=-1;
    st.push(arr[n-1]);
    for(int i = n-2;i>=0;i--){
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