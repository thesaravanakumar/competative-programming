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
    int l,r,a;
    cin>>l>>r>>a;
    while (a > 0)
    {
        if (l < r)
        {
            l++;
            a--;
        }
        else
        {
            r++;
            a--;
        }
    }
    cout << min(l, r) * 2;
    return 0;
}