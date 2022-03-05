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
        int n,m;
        cin>>n>>m;
        vector<int> a;
        vector<int> b;
        int q=0,w=0,z;
        for(int i=0;i<n;i++){
            cin>>z;
            a.pb(z);
            q+=a[i];
        }
        for(int i=0;i<m;i++){
            cin>>z;
            b.pb(z);
            w+=b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int c=0;
        for(int i=0,j=m-1;i<n;i++,j--){
            if(q>w)break;
            c++;
            q-=a[i];
            q+=b[j];
            w-=b[j];
            w+=a[i];
        }
        if(q>w)cout<<c<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}