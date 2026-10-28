#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int sumn=n*(n-1)/2;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=v[i];
    }
    cout<<sum-sumn<<" is the duplicate number.";
}