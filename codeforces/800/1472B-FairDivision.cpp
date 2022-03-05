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
        int a[n],o=0,t=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1)o++;
            else t++;
        }
        if(o%2==0&&t%2==0||t%2!=0&&o%2==0&&o)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}