#include <iostream>

using namespace std;

int main()
{

    int n, k[] = {4, 7, 44, 47, 74, 77, 444, 447, 477, 744, 747, 777, 774, 474};
    bool flag;

    cin >> n;

    for (int i = 0; i < 12; i++)
    {
        if (n % k[i] == 0)
        {
            flag = true;

            break;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}