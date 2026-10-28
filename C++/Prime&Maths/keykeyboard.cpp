#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
bool isprime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int greatestdiv(int n){
    for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
             return n/i;
                
            }
        }
        return 1;
}
using namespace std;
int main()
{

    int n;
    cin >> n;
    int count=0;
    while (n>1)
    {
       if(isprime(n)){
        count+=n;
        break;
       }
       int hf = greatestdiv(n);
       count+=n/hf;
       n=hf;
        
    }
    cout<<count;
}
