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
    int v=0;
    while(cin>>s){
        int q = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] < 91)
                q++;
        }
        v = max(v, q);
    }
    cout<<v;
    return 0;
}