#include <bits/stdc++.h>
using namespace std;

int search(vector<int> myvector, int target)
{
    for (int i = 0; i < myvector.size(); i++)
    {
        if (myvector[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int search2(vector<int> myvector, int target)
{
    int left = 0;
    int right = myvector.size() - 1;
    int position = -1;

    for (left = 0; left <= right; left++)
    {
        if (myvector[left] == target)
        {
            position = left;
            break;
        }
        if (myvector[right] == target)
        {
            position = right;
            break;
        }
        right--;
    }
    return position;
}

int main()
{
    vector<int> myvector = {1, 5, 4, 7, 3, 9, 41};
    cout << search2(myvector, 5) << endl;
    cout << search2(myvector, 20) << endl;

    return 0;
}