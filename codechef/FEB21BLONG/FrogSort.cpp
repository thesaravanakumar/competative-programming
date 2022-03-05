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
bool th(mii &m,int n){
    int c=0;
    for(auto it:m){
        if(it.F<n&&it.S<m[n])c++;
    }
    return c==n-1;
}
int he(vector<int> w,vector<int> l){
    mii m;
    mii s;
    for(int i=0;i<w.size();i++){
        m[w[i]]=i;
        s[w[i]]=l[i];
    }
    int c=0;
    sort(w.begin(),w.end());
    for(int i=1;i<w.size();i++){
        while(!th(m,w[i])){
            c++;
            m[w[i]]+=s[w[i]];
        }
    }
    return c;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    w(t){
        int n,k;
        cin>>n;
        vector<int> w,l;
        for(int i=0;i<n;i++){
            cin>>k;
            w.pb(k);
        }
        for(int i=0;i<n;i++){
            cin>>k;
            l.pb(k);
        }
        cout<<he(w,l)<<endl;
    }
    return 0;
}