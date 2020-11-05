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
            cout << " that I love";
        }
        else
        {
            if (i > 1)
            {

                cout << " that I hate";
            }
            else
                cout << "I hate";
        }
    }

    cout << " it";

    return 0;
}