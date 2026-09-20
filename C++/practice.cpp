#include <iostream>
using namespace std;

int searchkey(int arr[], int size, int key)
{
    if (size == 0)
        return -1;

    if (arr[size - 1] == key)
        return size - 1;

    return searchkey(arr, size - 1, key);
}

int main()
{
    int n = 10;

    int Arr[n] = {1,2,3,4,5,6,7,8,9,10};

    int key = 9;

    int ans = searchkey(Arr, n, key);

    cout << ans;

    return 0;
}