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
    cout<<"Rotated array by kth steps : ";
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
    cout<<"enter elements : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int k;
    cout<<"rotate by kth step enter k : ";
    cin>>k;
    if(k>n){
        k=k%n;
    }
    reversepart(0,n-k-1,v);
    reversepart(n-k,n-1,v);
    reversepart(0,n-1,v);
    disp(v);

}