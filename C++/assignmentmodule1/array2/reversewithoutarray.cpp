#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> v1(n);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    for(int i=0;i<n;i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=v1.size()-1;j>=0;j--){
            int temp=v1[i];
            v1[i]=v1[j];
            v1[j]=temp;

        }

    }
    cout<<"reversed : ";
    cout<<endl;
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
}