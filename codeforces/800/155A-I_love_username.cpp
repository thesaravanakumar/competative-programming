/*●▬▬▬▬▬๑۩۩๑▬▬▬▬●●▬▬▬▬▬๑۩۩๑▬▬▬▬●🆀🆄🅰🅺🅴●▬▬▬▬▬๑۩۩๑▬▬▬▬●●▬▬▬▬▬๑۩۩๑▬▬▬▬●*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int g = arr[0], l = arr[0], sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > g)
        {
            sum++;
            g = arr[i];
        }
        else if (l > arr[i])
        {
            sum++;
            l = arr[i];
        }
    }
    cout << sum;
    return 0;
}
/*●▬▬▬▬▬๑۩۩๑▬▬▬▬●●▬▬▬▬▬๑۩۩๑▬▬▬▬●🆀🆄🅰🅺🅴●▬▬▬▬▬๑۩۩๑▬▬▬▬●●▬▬▬▬▬๑۩۩๑▬▬▬▬●*/