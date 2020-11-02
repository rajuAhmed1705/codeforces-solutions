#include <iostream>

using namespace std;

int main()
{
    int n, p = 0, m = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int d, b;

        cin >> d >> b;

        p = (p - d) + b;

        if (p > m)
        {
            m = p;
        }
    }

    cout << m << endl;

    return 0;
}