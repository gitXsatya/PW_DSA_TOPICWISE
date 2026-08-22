#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "enter rows of matrix : ";
    int row;
    cin >> row;
    cout << "enter column of matrix : ";
    int col;
    cin >> col;
    vector<vector<int>> matrix(row, vector<int>(col));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        if (matrix[i][0] == 0)
        {
            for (int j = 0; j < col; j++)
            {
                matrix[i][j] = 1 - matrix[i][j];
            }
        }
    }
    cout << endl;
    for (int i = 0; i < col; i++)
    {
        int noz = 0;
        int noo = 0;
        for (int j = 0; j < row; j++)
        {
            if (matrix[j][i] == 0)
            {
                noz++;
            }
            else
            {
                noo++;
            }
        }
        if (noz > noo)
        {
            for (int j = 0; j < row; j++)
            {
                matrix[j][i] = 1 - matrix[j][i];
            }
        }
    }
    cout << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    int score = 0;

    for (int i = 0; i < row; i++)
    {
        int num = 0;
        for (int j = 0; j < col; j++)
        {
            num = num * 2 + matrix[i][j];
        }
        score += num;
    }

    cout << score;
}