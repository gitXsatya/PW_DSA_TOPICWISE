#include <iostream>
#include <climits>
using namespace std;
class MINheap
{
public:
    int arr[100];
    int idx;
    MINheap()
    {
        idx = 1;
    }
    int top()
    {
        return arr[1];
    }
    void push(int x)
    {
        arr[idx] = x;
        int i = idx;
        idx++;
        while (i != 1)
        {
            if (arr[i] < arr[i / 2])
            {
                swap(arr[i], arr[i / 2]);
                i=i/2;
            }
            else break;
        }
    }
    int size(){
        return idx-1;
    }
    void pop(){
        idx--;
        arr[1]=arr[idx];
        int i = 1;
        while(true){
            int left = 2*i , right = 2*i+1;
            if(left>idx-1){
                break;
            }
            if(right>idx-1){
                if(arr[i]>arr[left]){
                    swap(arr[i],arr[left]);
                    i=left;
                }
                break;
            }
            if(arr[left]<arr[right]){
                if(arr[i]>arr[left]){
                    swap(arr[i],arr[left]);
                    i=left;
                }else{
                    break;
                }
            }
            else {
                if(arr[i]>arr[right]){
                    swap(arr[i],arr[right]);
                    i=right;
                }else{
                    break;
                }
            }
        }
       
    }
    void display(){
        for(int i=1;i<idx;i++) cout<<arr[i]<<" ";
        cout<<endl;
    }

};
int main()
{
    MINheap pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(1);
    pq.push(2);
    cout<<pq.top()<<" "<<pq.size()<<endl;
    pq.display();
    pq.pop();
    pq.pop();
    pq.pop();
    pq.push(0);
    cout<<pq.top()<<" "<<pq.size()<<endl;
    pq.display();

}