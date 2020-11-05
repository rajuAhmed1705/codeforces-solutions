#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == s[j])
            {
                cout << j + 1 << " ";
            }
        }
    }

    return 0;
}