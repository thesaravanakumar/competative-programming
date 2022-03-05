/*●▬▬▬▬▬๑۩۩๑▬▬▬▬●●▬▬▬▬▬๑۩۩๑▬▬▬▬●🆀🆄🅰🅺🅴●▬▬▬▬▬๑۩۩๑▬▬▬▬●●▬▬▬▬▬๑۩۩๑▬▬▬▬●*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ats = 0;
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        switch (a[0])
        {
        case 'T':
            ats += 4;
            break;
        case 'C':
            ats += 6;
            break;
        case 'O':
            ats += 8;
            break;
        case 'D':
            ats += 12;
            break;
        case 'I':
            ats += 20;
            break;
        }
    }
    cout << ats << endl;
    return 0;
}
/*●▬▬▬▬▬๑۩۩๑▬▬▬▬●●▬▬▬▬▬๑۩۩๑▬▬▬▬●🆀🆄🅰🅺🅴●▬▬▬▬▬๑۩۩๑▬▬▬▬●●▬▬▬▬▬๑۩۩๑▬▬▬▬●*/