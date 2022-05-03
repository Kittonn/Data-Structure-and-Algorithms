#include <bits/stdc++.h>
using namespace std;

void bubble(vector<int> &Vector)
{
    int n = Vector.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (Vector[j] > Vector[j + 1])
            {
                swap(Vector[j], Vector[j + 1]);
            }
        }
    }
}

int main()
{
    vector<int> Vector = {5, 2, 16, 78, 9, 1};
    bubble(Vector);
    for (auto &x : Vector)
    {
        cout << x << " ";
    }
    return 0;
}