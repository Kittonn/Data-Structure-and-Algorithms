#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &Vector)
{
    int mid;
    for (int i = 0; i < Vector.size(); i++)
    {
        mid = i;
        for (int j = i + 1; j < Vector.size(); j++)
        {
            if (Vector[j] < Vector[mid])
            {
                mid = j;
            }
            swap(Vector[i], Vector[mid]);
        }
    }
}

int main()
{
    vector<int> Vector = {5, 2, 16, 78, 9, 1};
    selection_sort(Vector);
    for (auto &x : Vector)
    {
        cout << x << " ";
    }
    return 0;
}