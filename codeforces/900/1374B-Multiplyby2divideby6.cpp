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
        cin>>n;
        int c2=0,c3=0;
        while (n % 2 == 0)
            n /= 2, c2++;
        while (n % 3 == 0)
            n /= 3, c3++;

        if (n != 1 || c2 > c3)
            cout << -1 << endl;
        else
            cout << c3 - c2 + c3 << endl;
    }
    return 0;
}