#include <iostream>
#include <string>
using namespace std;
int maze(int er,int ec){
    if(er<1 || ec<1) return 0;
    if(er==1 && ec==1) return 1;
    int rightways=maze(er,ec-1);
    int downways=maze(er-1,ec);
    return rightways+downways;

}
void mazeways(int er,int ec,string s){
     if(er<1 || ec<1) {
        return;
     }
    if(er==1 && ec==1){ 
        cout<<s<<endl;
        return; 
    }
    mazeways(er,ec-1,s+"R");
    mazeways(er-1,ec,s+"D");
    return;
    
}

int main(){
    int m;
    cout<<"enter total rows : ";
    cin>>m;
    int n;
    cout<<"enter total columns : ";
    cin>>n;
    cout<<"total possible ways considering constraints : "<<maze(m,n)<<endl;
    mazeways(n,m,"");
}