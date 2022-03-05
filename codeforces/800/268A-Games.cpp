/*●▬▬▬▬▬๑۩۩๑▬▬▬▬●●▬▬▬▬▬๑۩۩๑▬▬▬▬●🆀🆄🅰🅺🅴●▬▬▬▬▬๑۩۩๑▬▬▬▬●●▬▬▬▬▬๑۩۩๑▬▬▬▬●*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m = 0;
    cin >> n;
    vector<int> h(n);
    vector<int> g(n);
    for (int i = 0; i < n; i++)
        cin >> h[i] >> g[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j != i && h[i] == g[j])
                m++;
        }
    }
    cout << m;
    return 0;
}
/*●▬▬▬▬▬๑۩۩๑▬▬▬▬●●▬▬▬▬▬๑۩۩๑▬▬▬▬●🆀🆄🅰🅺🅴●▬▬▬▬▬๑۩۩๑▬▬▬▬●●▬▬▬▬▬๑۩۩๑▬▬▬▬●*/