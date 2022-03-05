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
ll a[1005][1005],b[1005][1005];
bool check(ll a[1005][1005],ll b[1005][1005],ll r,ll c){
    ll i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]!=b[i][j])
            return false;
        }
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll x,r,c;
    w(t){
        cin>>r>>c>>x;
        ll i,j,k,diff;
        for(i=0;i<r;i++){
            for(j=0;j<c;j++)
            cin>>a[i][j];
        }
        for(i=0;i<r;i++){
            for(j=0;j<c;j++)
            cin>>b[i][j];
        }
        if(r<x&&c<x){
            if(check(a,b,r,c))cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else if(r<x){
            for(i=0;i<r;i++){
                for(j=0;j<=(c-x);j++){
                    if(a[i][j]==b[i][j])
                    continue;
                    else{
                        diff=(b[i][j]-a[i][j]);
                        a[i][j]+=diff;
                        k=1;
                        while(k<x){
                            a[i][j+k]+=diff;
                            k++;
                        }
                    }
                }
            }
            if(check(a,b,r,c))cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else if(c<x){
            for(i=0;i<c;i++){
                for(j=0;j<=(r-x);j++){
                    if(a[j][i]==b[j][i])
                    continue;
                    else{
                        diff=(b[j][i]-a[j][i]);
                        a[j][i]+=diff;
                        k=1;
                        while(k<x){
                            a[j+k][i]+=diff;
                            k++;
                        }
                    }
                }
            }
            if(check(a,b,r,c))cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else if(c>=x&&r>=x){
            for(i=0;i<r;i++){
                for(j=0;j<=(c-x);j++){
                    if(a[i][j]==b[i][j])
                    continue;
                    else{
                        diff=(b[i][j]-a[i][j]);
                        a[i][j]+=diff;
                        k=1;
                        while(k<x){
                            a[i][j+k]+=diff;
                            k++;
                        }
                    }
                }
            }
            for(i=0;i<c;i++){
                for(j=0;j<=(r-x);j++){
                    if(a[j][i]==b[j][i])
                    continue;
                    else{
                        diff=(b[j][i]-a[j][i]);
                        a[j][i]+=diff;
                        k=1;
                        while(k<x){
                            a[j+k][i]+=diff;
                            k++;
                        }
                    }
                }
            }
            if(check(a,b,r,c))cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}