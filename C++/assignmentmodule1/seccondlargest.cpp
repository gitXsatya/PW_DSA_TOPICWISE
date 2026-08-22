#include <iostream>
#include <climits>
using namespace std;

int main(){
    int max=INT_MIN;
    int seconmax=INT_MIN;
    int n;
    cout<<"enter number of elements to store in array : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements : "<<endl;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
        if(arr[i]>max){
            seconmax=max;
            max=arr[i];
        }
        else if((seconmax<arr[i]) && (arr[i]!=max)){
            seconmax=arr[i];
        }
    }
    cout<<"second largest elements in the array is : "<<seconmax;

}
