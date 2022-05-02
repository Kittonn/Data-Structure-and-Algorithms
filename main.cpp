#include <bits/stdc++.h>
using namespace std;

int main()
{
    array<int, 5> Myarray = {1, 2, 3, 4, 5};
    // array<int, 5> Myarray{1, 2, 3, 4, 5};

    cout << Myarray.size() << endl;

    cout << Myarray.at(2) << endl;

    cout << Myarray[3] << endl;
    cout << Myarray.front() << endl;
    cout << Myarray.back() << endl;
    cout << Myarray.data() << endl;
    return 0;
}