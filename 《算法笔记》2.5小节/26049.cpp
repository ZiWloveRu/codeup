#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    int cur = 0;
    vector<int> num;
    while (cin >> cur)
    {
        num.push_back(cur);
    }
    for (auto it = num.crbegin(); it != num.crend(); ++it)
    {
        cout << *it << endl;
    }
    return 0;
} 
