#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size Of Array : \n";
    cin>>n;
    vector <int> v(n);
    cout<<"enter elements : ";
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    cout<<"verify inserted elements : ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    sort(v.begin(),v.end());
    cout<<endl<<"enter target element : ";
    int target;
    cin>>target;
    int high=v.size()-1;
    int low=0;
    bool flag=false;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(v[mid]==target){
            if(mid == 0 || v[mid-1] != target){
                    cout<<mid;
                    flag=true;
                    break;
            }else{
                high=mid-1;
            }
        }
        else if(v[mid]<target){
            low=mid+1;
        }else{
            high=mid-1;
        }

    }
    if(flag!=true){
        cout<<"-1";
    }

    
    low = 0;
    high = v.size() - 1;
    flag = true;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(v[mid]==target){
           if(mid == n-1 || v[mid+1] != target){
                    cout<<mid;
                    flag=true;
                    break;
            }else{
                low=mid+1;
            }
        }
        else if(v[mid]<target){
            low=mid+1;
        }else{
            high=mid-1;
        }

    }
    if(flag!=true){
        cout<<"-1";
    }


}