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
int r, c, r1[15], c1[15],h;
char a;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>r>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a;
            if(a=='S'){r1[i]=1;c1[j]=1;}
        }
    }
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)if(r1[i]&&c1[j])h++;
    cout<<r*c-h;
    return 0;
}