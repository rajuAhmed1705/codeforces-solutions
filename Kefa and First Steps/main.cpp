#include <iostream>

using namespace std;

int main()
{

    int n, c = 0, max = 0;

    cin >> n;
    int s[n];
    cin >> s[0];

    for (int i = 1; i < n; i++)
    {
        cin >> s[i];
        if (s[i] >= s[i - 1])
        {
            c++;
            if (max <= c)
            {
                max = c;
            }
        }
        else
        {

            c = 0;
        }
    }

    cout << max + 1;

    return 0;
}