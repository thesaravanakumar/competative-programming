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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int r = 0;
    int q = 0;
    for (int i = 1; i < n; ++i) {
        if (s[i - 1] == 'S' && s[i] == 'F') {
            ++r;
        } else if (s[i - 1] == 'F' && s[i] == 'S') {
            ++q;
        }
    }
    if (r > q) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}