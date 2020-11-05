#include <iostream>
using namespace std;

int main()
{
    int n;

    bool flag = false;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        if (m != 0)
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        cout << "HARD" << endl;
    }
    else
    {

        cout << "EASY" << endl;
    }

    return 0;
}