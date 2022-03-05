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
    int x, y;
    string c[6] = {"1/6", "1/3", "1/2", "2/3", "5/6", "1/1"};
    cin >> x >> y;
    x = max(x, y);
    cout << c[6 - x];
    return 0;
}
