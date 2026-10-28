#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"enter size of first sorted array : ";
    cin>>n;
    cout<<"enter elements into your array : ";
    vector <int>v1(n);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    cout<<"1st array input submitted successfully !";
    int a;
    cout<<"enter size of second sorted array : ";
    cin>>a;
    cout<<"enter elements into your array : ";
    vector <int>v2(a);
    for(int i=0;i<a;i++){
        cin>>v2[i];
    }
    cout<<"2nd array input submitted successfully !";
    vector <int>v3(v1.size()+v2.size());
    int i=0;
    int j=0;
    int k=0;
    for( i,j,k;i<=n-1 && j<=a-1;){
            if(v1[i]<=v2[j]){
                v3[k]=v1[i];
                i++;
                k++;
            }
            // else(v2[j]<=v1[i]){
               else{ v3[k]=v2[j];
                j++;
                k++;
            }
    }
    if(i==n){
        for(j;j<=a-1;){
            v3[k]=v2[j];
            j++;
            k++;
        }
    }
    if(j==a){
        for(i;i<=n-1;){
            v3[k]=v1[i];
            i++;
            k++;
        }
    }
    cout<<"sorted final array : "<<endl;
    for(int i=0;i<v3.size();i++){
        cout<<v3[i]<<" ";
    }


}