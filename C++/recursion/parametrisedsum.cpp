#include <iostream>
using namespace std;
void sumn(int sum,int num){
    if(num==0){
        cout<<sum;
        return ;
    }
    sumn(sum+num,num-1);
}

int main(){
    int n;
    cin>>n;
    int sum=0;
    sumn(sum,n);
}