#include <bits/stdc++.h>
using namespace std;

void insertion(vector<int> &Vector)
{
    int key, j;
    for (int i = 0; i < Vector.size(); i++)
    {
        key = Vector[i];
        j = i - 1;
        while (j >= 0 && Vector[j] > key)
        {
            Vector[j + 1] = Vector[j];
            j -= 1;
        }
        Vector[j + 1] = key;
    }
}

int main()
{
    vector<int> Vector = {3, 2, 14, 5, 1, 6};
    insertion(Vector);
    for (auto &x : Vector)
    {
        cout << x << " ";
    }
    return 0;
}