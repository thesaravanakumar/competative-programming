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
        int n,c0,c1,h;
        cin>>n>>c0>>c1>>h;
        string s;
        cin>>s;
        int one=0,zero=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1')one++;
            else zero++;
        }
        int p=(c0*zero)+(c1*one);
        int q=(h*zero)+(n*c1);
        int r=(h*one)+(n*c0);
        cout<<min(min(p,q),r)<<endl;
    }
    return 0;
}