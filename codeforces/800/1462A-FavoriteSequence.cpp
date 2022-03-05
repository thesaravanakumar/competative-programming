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
        int a[n], i, j;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0, j = n - 1; i < j; i++, j--)
            cout << a[i] << " " << a[j]<<" ";
        if (i == j)
            cout << a[i];
        cout << endl;
    }
    return 0;
}