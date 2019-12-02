#include <iostream>
#include <string>
using namespace std;
string decode(string cipher)
{
    for (auto &c : cipher)
    {
        if (isupper(c))
        {
            c = 25 - c + 2 * 'A';
        }
        else if (islower(c))
        {
            c = 25 - c + 2 * 'a';
        }
    }
    return cipher;
}
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    string cipher;
    while (cin >> cipher)
    {
        cout << decode(cipher) << endl;
    }
    return 0;
} 
