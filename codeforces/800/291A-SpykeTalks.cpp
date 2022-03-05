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
int n, a, k;
map<int, int> m;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int c=0;
    w(t){
        cin >> a;
        if (a > 0)
            m[a]++;
        if (m[a] == 2)
            k++;
        if (m[a] == 3)
        {
            cout << -1;
            return 0;
        }
    }
    cout<<k;
    return 0;
}