#include <iostream>
#include <cmath>
using namespace std;
bool isperfect(int x){
    int root=sqrt(x);
    if(root*root==x) return true;
    else false;
}
int main(){
   int n;
   cin>>n;
   int a=0;
   int b=n;
   while(a<=b){
    if(isperfect(a)&&isperfect(b)){
        return true;
        a++;
        b--;
    }
    return false;
   }
   
}