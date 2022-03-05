#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x[5];
    cin >> x[0] >> x[1] >> x[2] >> x[3];
    sort(x, x + 4);
    cout << x[3] - x[2] << " " << x[3] - x[1] << " " << x[3] - x[0];
    return 0;
}
