#include <iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    int pivotelement=arr[(si+ei)/2];
    int count=0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<=pivotelement){
            count++;
        }
    }
    int pivotidx=count+si;
    swap(arr[(si+ei)/2],arr[pivotidx]);
    int i=si;
    int j=ei;
    while(i<pivotidx && j>pivotidx){
        if(arr[i]<pivotelement){
            i++;
        }
        else if(arr[j]>pivotelement){
            j--;
        }
        else if(arr[i]>pivotelement && arr[j]<pivotelement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotidx;

}
int kthsmallest(int arr[],int si,int ei,int k){
    int pivot_idx=partition(arr,si,ei);
    if(pivot_idx+1==k){
        return arr[pivot_idx];
    }
    else if(pivot_idx+1>k){
        return kthsmallest(arr,si,pivot_idx-1,k);
    }
    else{
        return kthsmallest(arr,pivot_idx+1,ei,k);
    }
    
   
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k;
    cin>>k;
    cout << kthsmallest(arr,0,n-1,k);

}