#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int xr = 0;
    for (int i = 0; i < n; i++) {
        xr ^= arr[i];
    }
    int bit = xr & (-xr);
    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] & bit)
            a ^= arr[i];
        else
            b ^= arr[i];
    }

    cout << a << " " << b;

    return 0;
}