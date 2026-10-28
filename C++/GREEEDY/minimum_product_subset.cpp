#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int minprod(vector <int> &arr){
    int cn=0;
    int cz=0;
    int cp=0;
    int prod_pos=1;
    int prod_neg=1;
    int largest_negative = INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<0){
            cn++;
            prod_neg*=arr[i];
            largest_negative=max(arr[i],largest_negative);
        }
        else if(arr[i]==0) cz++;
        else {
            cp++;
            prod_pos*=arr[i];
        }
    }
    if(cp==0){
        if(cz>0) return 0;
        else {
            auto it = min_element(arr.begin(),arr.end());
            return *it;
        }
    }
    else{
        if(cn%2==0){
            return (prod_neg/largest_negative)*prod_pos;
        }
        else {
            return prod_neg*prod_pos;
        }
    }

}
int main(){
    int n;
    cin>>n;
    vector <int> arr;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    cout<<minprod(arr);
    return 0;
}