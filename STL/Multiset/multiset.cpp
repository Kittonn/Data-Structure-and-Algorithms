#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    int age;
    string name;
    bool operator<(const Person &rhs) const { return age < rhs.age; }
    bool operator>(const Person &rhs) const { return age > rhs.age; }
};

int main()
{
    multiset<Person, std::greater<Person>> multiSet = {{25, "K"}, {20, "T"}};
    // multiset<int, std::greater<int>> mymultiset = {1, 3, 3, 5, 1, 5, 6, 4, 8, 7};
    for (const auto &x : multiSet)
    {
        cout << x.age << " " << x.name << endl;
    }
    return 0;
}