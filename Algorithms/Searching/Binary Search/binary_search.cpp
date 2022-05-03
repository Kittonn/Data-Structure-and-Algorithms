#include <bits/stdc++.h>
using namespace std;

int search(vector<int> myvector, int l, int r, int target)
{
    if (r >= l)
    {
        int mid = l + ((r - l) / 2);
        if (myvector[mid] == target)
        {
            return mid;
        }
        if (myvector[mid] > target)
        {
            return search(myvector, l, mid - 1, target);
        }
        return search(myvector, mid + 1, r, target);
    }
    return -1;
}

int main()
{
    vector<int> myvector = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << search(myvector, 0, myvector.size() - 1, 9) << endl;
    cout << search(myvector, 0, myvector.size() - 1, 5) << endl;
    cout << search(myvector, 0, myvector.size() - 1, 2) << endl;
    return 0;
}