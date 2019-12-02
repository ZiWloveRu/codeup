#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    int a[11][11] = {0}; // 全初始化0
    a[0][1] = 1;
    int n = 0;
    while (cin >> n)
    {
        for (int i = 1; i < n + 1; ++i)
        {
            for (int j = 1; j < i + 1; ++j)
            {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
                cout << a[i][j] << ' ';
            }
            cout << endl;
        }
    }
    return 0;
} 
