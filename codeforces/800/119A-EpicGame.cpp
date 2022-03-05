#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    int temp = 0;
    while (n>=0)
    {
        ++temp;
        n -= __gcd((temp & 1) ? a : b, n);
    }
    if (temp & 1)
        cout << 1;
    else
        cout << 0;
    return 0;
}