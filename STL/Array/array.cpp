#include <bits/stdc++.h>
using namespace std;

int main()
{
    array<int, 5> Myarray = {10, 20, 30, 40, 5};
    // Myarray.fill(10);

    // for (auto it = Myarray.cbegin(); it < Myarray.cend(); it++)
    // {
    //     cout << *it << endl;
    // }

    // for (auto it = Myarray.crbegin(); it < Myarray.crend(); it++)
    // {
    //     cout << *it << endl;
    // }

    for (int &x : Myarray)
    {
        cout << x << endl;
    }

    cout << Myarray.size() << endl;
    cout << Myarray.at(2) << endl;
    cout << Myarray[3] << endl;
    cout << Myarray.front() << endl;
    cout << Myarray.back() << endl;
    cout << Myarray.data() << endl;

    return 0;
}