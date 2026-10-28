#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;          // Number of test cases

    while (t--)        // Run for each test case
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool flag = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << "already sorted array\n";
        }
        else
        {
            bool check = true;
            for (int i = 0; i < n - 1; i++)
            {
                check = true;
                for (int j = 0; j < n - 1 - i; j++)
                {
                    if (arr[j] > arr[j + 1])
                    {
                        swap(arr[j], arr[j + 1]);
                        check = false;
                    }
                }
                if (check)
                {
                    break;
                }
            }

            cout << "sorted array : ";
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << "\n";   // Separate outputs of different test cases
        }
    }
}