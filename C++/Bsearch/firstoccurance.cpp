#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int high = n - 1;
    int low = 0;
    int target;
    cin >> target;
    bool flag = false;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            if (mid == 0 || arr[mid - 1] != target)
            {
                cout << mid;
                flag = true;
                break;
            }
            else
            {
                high = mid - 1;
            }
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (flag == false)
    {
        cout << -1;
    }
}