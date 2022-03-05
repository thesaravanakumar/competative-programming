#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int b, r = 0;
        cin >> b;
        int count = 0, temp = b;
        while (temp != 0)
        {
            if (temp % 10 != 0)
                r++;
            count++;
            temp /= 10;
        }
        int i = 10, j = 0, c = 0;
        int f[r];
        while (count != 0)
        {
            int v = b % i;
            if (v != 0)
            {
                f[j] = v;
                c++;
                j++;
            }
            b = b - v;
            i = i * 10;
            count--;
        }
        cout << c << "\n";
        for (i = 0; i < r; i++)
            cout << f[i] << " ";
        cout << "\n";
    }
}