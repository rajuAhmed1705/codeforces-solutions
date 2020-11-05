#include <iostream>
using namespace std;

int main()
{
    int n, check, c = 1;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        if (i == 0)
        {
            check = m;
        }
        else
        {
            if (m != check)
            {
                c++;
                check = m;
            }
        }
    }

    cout << c;

    return 0;
}