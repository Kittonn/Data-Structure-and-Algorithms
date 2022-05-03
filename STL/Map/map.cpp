#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int, std::greater<string>> Map = {{"K", 1}};
    Map.insert(make_pair("B", 10));
    for (auto &x : Map)
    {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}