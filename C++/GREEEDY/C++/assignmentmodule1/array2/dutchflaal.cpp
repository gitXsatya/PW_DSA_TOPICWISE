#include <iostream>
#include <vector>
using namespace std;
void dutchflag(vector <int>&v1){
    int low=0;
    int mid=0;
    int high=v1.size()-1;
    while(mid<=high){
        if(v1[mid]==2){
            int temp=v1[mid];
            v1[mid]=v1[high];
            v1[high]=temp;
            high--;
        }
        if(v1[mid]==0){
           int temp=v1[mid];
            v1[mid]=v1[low];
            v1[low]=temp;
            low++;
            mid++;
        }
        if(v1[mid]==1){
            mid++;
        }
    }
}
void disp(vector <int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        
    }
    cout<<endl;
}
int main(){
 int n;
 cout<<"enter array size : "; 
 cin>>n;
 vector <int> v(n);
 cout<<"enter the elements : ";
 for(int i=0;i<n;i++){
    cin>>v[i];
 }
 disp(v);
 dutchflag(v);
 disp(v);
}