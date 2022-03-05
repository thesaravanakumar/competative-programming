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
        vector<pii> p,st;
        for(int i=0;i<n;i++){
            int v;
            cin>>v;
            p.pb({i+1,v});
        }
        if(n==2){
            cout<<1<<endl;
            continue;
        }
        st.pb(p[0]);
        st.pb(p[1]);
        int ans=1,sz=st.size();
        for(int i=2;i<n;i++){
            while(st.size()>=2){
                double s1=((double)st[sz-1].second-(double)st[sz-2].second)/((double)st[sz-1].first-(double)st[sz-2].first);
                double s2=((double)p[i].second-(double)st[sz-1].second)/((double)p[i].first-(double)st[sz-1].first);
                if(s1<=s2){
                    st.pop_back();
                    sz--;
                }
                else break;
            }
            st.pb(p[i]);sz++;
            ans=max(ans,st[sz-1].first-st[sz-2].first);
        }
        cout<<ans<<endl;
    }
    return 0;
}