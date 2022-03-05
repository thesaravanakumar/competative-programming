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
    int a,b;
    cin>>a>>b;
    int ps=0,ns=0;
    if(a>=b){
        int i=1;
        while(a--){
            cout<<i<<" ";
            ps+=i;
            i++;
        }
        int j=-1;
        while(b>1){
            cout<<j<<" ";
            ns+=j;
            j--;
            b--;
        }
        cout<<"-"<<ps+ns<<" ";
    }
    else{
        int j=-1;
        while(b--){
            cout<<j<<" ";
            ns+=j;
            j--;
        }int i=1;
        while(a>1){
            cout<<i<<" ";
            ps+=i;
            i++;
            a--;
        }
        cout<<abs(ns+ps)<<" ";
    }
    return 0;
}