#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> MyVector(5);
    cout << MyVector.size();

    // vector<int> MyVector(5, 20);
    // MyVector.erase(MyVector.begin() + 2);

    // MyVector.resize(10);
    // MyVector.emplace(MyVector.begin(), 10);
    // MyVector.emplace(MyVector.end(), 1000);

    // MyVector.emplace_back(1);
    // MyVector.emplace_back(2);

    // for (int &x : MyVector)
    // {
    //     cout << x << endl;
    // }
    int num;
    for (int i = 0; i < 5; i++)
    {
        cin >> num;
        MyVector.push_back(num);
    }

    return 0;
}