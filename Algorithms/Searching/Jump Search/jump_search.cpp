#include <bits/stdc++.h>
using namespace std;

int search(vector<int> myvector, int target)
{
    int i = 0;
    int step = sqrt(myvector.size());
    while (myvector[step] <= target && step < myvector.size())
    {
        i = step;
        step += sqrt(myvector.size());
    }

    for (int j = i; j < step; j++)
    {
        if (myvector[j] == target)
        {
            return j;
        }
    }
    return -1;
}

int main()
{
    vector<int> myvector = {1, 2, 3, 4, 5, 6};
    cout << search(myvector, 1) << endl;
    return 0;
}