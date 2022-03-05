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
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k = 0, i = 0, max, min;
        cin >> n >> k;
        long long int a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        max = *max_element(a, a + n);
        min = *min_element(a, a + n);
        if (k % 2 == 1)
            for (i = 0; i < n; i++)
                a[i] = max - a[i];
        else
            for (i = 0; i < n; i++)
                a[i] = a[i] - min;

        for (i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}