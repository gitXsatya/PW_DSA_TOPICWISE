#include <iostream>
using namespace std;
int main (){
 int arr[10]={1,2,3,4,5,6,7,8,78,100};
 int low=0;
 int high=9;
 int key=1000;
 while(low<=high){
    int mid1=low+(high-low)/3;
    int mid2=high-(high-low)/3;
    if(arr[mid1]==key){
        cout <<mid1+1;
        break;
    }else if(arr[mid2]==key){
        cout<<mid2+1;
        break;
    }
    else if(arr[mid1]>key){
        high=mid1-1;
    }
    else if(arr[mid2]<key){
        low=mid2+1;
    }
    if(arr[mid1]<key && arr[mid2]>key){
        low=mid1+1;
        high=mid2-1;
    }
    

 }
    
}