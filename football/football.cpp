#include <iostream>
using namespace std;

int main()
{
    string s;

    int m = 1;

    cin >> s;

    for (int i = 1; i < s.size(); i++)
    {
        s[i - 1] == s[i] ? m++ : m = 1;
        if (m == 7)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}