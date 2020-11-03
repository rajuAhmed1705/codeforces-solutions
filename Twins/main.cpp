#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int n, total = 0, num = 0, t = 0;
    cin >> n;
    int c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
        total += c[i];
    }

    sort(c, c + n);
    for (int i = n - 1; i >= 0; i--)
    {
        t += c[i];
        num++;
        if (total / 2 < t)
        {
            break;
        }
        }

    cout << num;

    return 0;
}