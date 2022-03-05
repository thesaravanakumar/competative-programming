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
        ll n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        auto left=find(a.begin(),a.end(),1);
        auto right=find(a.rbegin(),a.rend(),1);
        int first1=distance(a.begin(),left);
        int last1=distance(a.rbegin(),right);
        last1=n-last1-1;
        int sum=0;
        for(int i=first1;i<=last1;i++){
            if(a[i]==0)sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}