/*●▬▬▬▬▬๑۩۩๑▬▬▬▬●●▬▬▬▬▬๑۩۩๑▬▬▬▬●🆀🆄🅰🅺🅴●▬▬▬▬▬๑۩۩๑▬▬▬▬●●▬▬▬▬▬๑۩۩๑▬▬▬▬●*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<int> a[4];
int f[4];
int main()
{
    int n, k, i, w;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> k;
        a[k].push_back(i);
        f[k]++;
    }
    w = min(f[1], min(f[2], f[3]));
    cout << w << endl;
    for (i = 0; i < w; i++)
    {
        cout << a[1][i] << " " << a[2][i] << " " << a[3][i] << endl;
    }
}
/*●▬▬▬▬▬๑۩۩๑▬▬▬▬●●▬▬▬▬▬๑۩۩๑▬▬▬▬●🆀🆄🅰🅺🅴●▬▬▬▬▬๑۩۩๑▬▬▬▬●●▬▬▬▬▬๑۩۩๑▬▬▬▬●*/