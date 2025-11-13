#include <iostream>
using namespace std;
int main()
{
    int n, s, t, f, i, r;
    cout << "\nEnter the no:";
    cin >> n;
    s = 0;
    t = n;
    i = 1;
    while (i <= n)
    {
        r = n % 10;
        f = 1;
        while (r > 0)
        {
            f = f * r;
            r--;
        }
        s = s + f;
        n = n / 10;
    }
    (s == t) ? cout << "\nTrue" : cout << "\nFalse";
}