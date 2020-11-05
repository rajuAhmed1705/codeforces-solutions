#include <iostream>

using namespace std;

int main()
{

    string s;
    cin >> s;

    bool flag = true;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] >= 'a')
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a')
            {
                s[i] = s[i] - ('a' - 'A');
            }
            else
            {
                s[i] += ('a' - 'A');
            }
        }
    }

    cout << s;

    return 0;
}