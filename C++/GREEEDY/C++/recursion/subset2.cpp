#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void subset(vector<int> &nums, vector<int> &temp, int idx)
{
    if (!temp.empty())
    {
        for (int x : temp)
            cout << x << " ";
        cout << endl;
    }

    for (int i = idx; i < nums.size(); i++)
    {
        if (i > idx && nums[i] == nums[i - 1])
            continue;

        temp.push_back(nums[i]);
        subset(nums, temp, i + 1);
        temp.pop_back();
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    sort(nums.begin(), nums.end());

    vector<int> temp;
    subset(nums, temp, 0);

    return 0;
}