#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << " THAT I LOVE";
        }
        else
        {
            if (i > 1)
            {

                cout << " THAT I HATE";
            }
            else
                cout << "I HATE";
        }
    }

    cout << " IT";

    return 0;
}