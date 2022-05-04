#include <bits/stdc++.h>
using namespace std;

void insertion(vector<int> &Vector)
{
    int hole, value;
    for (int i = 1; i < Vector.size(); i++)
    {
        value = Vector[i];
        hole = i;
        while (hole > 0 && Vector[hole - 1] > value)
        {
            Vector[hole] = Vector[hole - 1];
            hole -= 1;
        }
        Vector[hole] = value;
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