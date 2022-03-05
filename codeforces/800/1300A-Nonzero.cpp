#include <bits/stdc++.h>
#define ll long long int
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define mii map<int, int>
#define sp(x, y) fixed << setprecision(y) << x
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    w(t){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        if(accumulate(a,a+n,0)==0&&accumulate(a,a+n,1,multiplies<int>())!=0)
        cout<<1<<endl;
        else {
            int sum=0;
            for(int i=0;i<n;i++)if(a[i]==0)sum++;
            if(accumulate(a,a+n,0)+sum==0)sum++;
            cout<<sum<<endl;
        }
    }
    return 0;
}