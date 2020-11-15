#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, min = 9999999, minindx, maxindx, max = 0;

    cin >> n;

    int s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        if (s[i] <= min)
        {
            minindx = i;
            min = s[i];
        }
        if (s[i] > max)
        {
            maxindx = i;
            max = s[i];
        }
    }

    if (minindx < maxindx)
    {
        cout << (maxindx + ((n - 1) - minindx)) - 1 << endl;
    }
    else
    {
        cout << maxindx + ((n - 1) - minindx) << endl;
    }

    return 0;
}