#include <iostream>
#include <string>
using namespace std;
int my_strcpy(string s1, string s2)
{
    for (auto i = 0; i < s1.size() && i < s2.size(); ++i)
    {
        if (s1[i] != s2[i])
        {
            return s1[i] - s2[i];
        }
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    string s1, s2;
    while (cin >> s1)
    {
        cin >> s2;
        cout << my_strcpy(s1, s2) << endl;
    }
    return 0;
} 
