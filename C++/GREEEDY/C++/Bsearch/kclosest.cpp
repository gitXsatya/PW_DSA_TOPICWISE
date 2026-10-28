#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int target;
    cin >> target;
    int k;
    cin >> k;
    vector<int> ans(k);
    if (target < v[0])
    {
        for (int i = 0; i < k; i++)
        {
            ans[i] = v[i];
        }
        for (int i = 0; i < k; i++)
        {
            cout << ans[i] << endl;
        }
        return 0;
    }
    if (target > v[n - 1])
    {
        for (int i = 0; i < k; i++)
        {
            ans[i] = v[n - k + i];
        }
        for (int i = 0; i < k; i++)
        {
            cout << ans[i] << endl;
        }
        return 0;
    }
    int high = n - 1;
    int low = 0;
    int t = 0;
    bool flag = false;
    int mid;
    mid = low + (high - low) / 2;
    while (low <= high)
    {
        if (v[mid] == target)
        {
            ans[t] = v[mid];
            flag = true;
            t++;
            break;
        }
        else if (target > v[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    int lb;
    int ub;
    if (flag)
    {
        lb = mid - 1;
        ub = mid + 1;
    }
    else
    {
        lb = high;
        ub = low;
    }
    if (flag == true)
    {
        while (t < k)
        {
            int d1 = abs(target - v[lb]);
            int d2 = abs(target - v[ub]);
            if (d1 <= d2)
            {
                ans[t] = v[lb];
                lb--;
            }
            else
            {
                ans[t] = v[ub];
                ub++;
            }
            t++;
        }
    }
    if (lb < 0)
    {
        while (t < k)
        {
            ans[t] = v[ub];
            ub++;
            t++;
        }
    }
    if (ub > n - 1)
    {
        while (t < k)
        {
            ans[t] = v[lb];
            lb--;
            t++;
        }
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < k; i++)
    {
        cout << ans[i] << endl;
    }
}