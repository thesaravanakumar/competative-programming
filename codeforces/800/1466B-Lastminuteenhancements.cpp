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
        int n,q;
        cin>>n;
        set <int> a;
        for(int i=0;i<n;i++){
            cin>>q;
            if(a.count(q))q++;
            a.insert(q);
        }
        cout<<a.size()<<endl;
    }
    return 0;
}