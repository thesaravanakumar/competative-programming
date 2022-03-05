#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a >= 1 && a <= 10000)
    {
        while (a--)
        {
            int b, c, m;
            cin >> b >> c;
            if (b > c)
            {
                if (b > c + c)
                    m = b * b;
                else
                    m = (c + c) * (c + c);
            }
            else if (b < c)
            {
                if (c > b + b)
                    m = c * c;
                else
                    m = (b + b) * (b + b);
            }
            else if (b == c)
                m = (b + b) * (b + b);
            cout << m << endl;
        }
    }
    return 0;
}