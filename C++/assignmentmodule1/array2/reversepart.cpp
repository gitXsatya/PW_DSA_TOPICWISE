#include <iostream>
#include <vector>
using namespace std;
void reversepart(int a,int b,vector <int> &arr){
    int i=a;
    int j=b;
    for(i,j;i<=j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
void disp(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector <int>v(n);
    cout<<"enter inputs : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int i,j;
    cout<<"enter starting index : ";
    cin>>i;
     cout<<"enter ending index : ";
    cin>>j;
    disp(v);
    reversepart(i,j,v);
    disp(v);

}