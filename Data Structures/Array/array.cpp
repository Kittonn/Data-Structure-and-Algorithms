#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1D
    int n = 5;
    int arr[n];
    int in;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> in;
    //     arr[i] = in;
    // }

    // for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    // {
    //     cout << arr[i] << " ";
    // }
    cout << endl;
    array<int, 5> Myarray = {1, 23, 4, 56, 8};
    // for (const int &x : Myarray)
    // {
    //     cout << x << " ";
    // }

    // vector<int> Myvector;
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> in;
    //     Myvector.push_back(in);
    // }

    // for (const int &x : Myvector)
    // {
    //     cout << x << " ";
    // }
    // int two[2][2];
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cin >> in;
    //         two[i][j] = in;
    //     }
    // }

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout << two[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    vector<vector<int>> Mytwo;
    for (int i = 0; i < 2; i++)
    {
        vector<int> row;
        for (int j = 0; j < 2; j++)
        {
            cin >> in;
            row.push_back(in);
        }
        Mytwo.push_back(row);
    }
    for (vector<int> x : Mytwo)
    {
        for (int y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
}