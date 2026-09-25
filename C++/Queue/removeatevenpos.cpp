#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void display(queue <int> &q){
    int n = q.size();
    for(int i=0;i<n;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void removeAteven(queue <int> &q){
    int n = q.size();
    for(int i=0;i<n;i++){
        if(i%2!=0){
            int x = q.front();
            q.push(x);
        }
        q.pop();
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
    display(q);
    removeAteven(q);
    display(q);
}