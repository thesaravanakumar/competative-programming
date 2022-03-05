#include              <bits/stdc++.h>
#define ll            long long int
#define w(t)          int t; cin>>t; while(t--)
#define F             first
#define S             second
#define pb            push_back
#define mp            make_pair
#define pii           pair<int,int>
#define mii           map<int,int>
#define sp(x,y)       fixed<<setprecision(y)<<x
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    w(t){
        int n;
        cin >> n;
        string s;
        int a[26] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            int l = s.length();
            for (int i = 0; i < l; i++)
                a[s[i] - 'a']++;
        }
        bool k = 0;
        for (int i = 0; i < 26; i++)
            if (a[i] % n)
            {
                cout << "NO" << endl;
                k = 1;
                break;
            }
        if (!k)
            cout << "YES" << endl;
    }
    return 0;
}