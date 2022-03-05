#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a >= 1 && a <= 1000)
    {
        while (a--)
        {
            long long int b;
            cin >> b;
            cout << b % 2 + b / 2 << endl;
        }
    }
    return 0;
}