#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long l, r;
        cin >> l >> r;
        long long x = l;
        long long y = 2 * l;
        if (y <= r)
        {
            cout << x << " " << y << endl;
        }
        else
        {
            cout << "-1 -1" << endl;
        }
    }
    return 0;
}