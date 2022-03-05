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
        int n,q,m;
	    cin>>n>>q>>m;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
        int b[1000001]={};
        map <pii,int> mpp;
        while(q--){
            int l,r;
            cin>>l>>r;
            l--,r--;
            if(a[l]>m){
                continue;
            }
            else if(a[l]<=m && a[r]>m){
                b[a[l]]++;
                b[m+1]--;
            }else{
                b[a[l]]++;
                b[m+1]--;
                mpp[{a[l],a[r]}]++;
            }
        }
        for(auto x:mpp){
            int ai=x.F.F;
            int bi=x.F.S;
            int l=x.S;
            b[bi+ai]-=l;
            b[bi + 2 * ai]+=l;
            int  c=bi + 2 * ai;
            while(c+bi <= m){
                c+=bi;
                b[c]-=l;
                b[c+ai]+=l;
                c+=ai;
            }
        }
        int mx=0;
        for(int i=1;i<=m;i++){
            b[i]+=b[i-1];
            mx=max(mx,b[i]);
        }
        cout<<mx<<endl;
    }
    return 0;
}