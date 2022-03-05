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
        string a,b,c;
        cin>>a>>b>>c;
        int flag=0;
        for(int i=0;i<a.size();i++){
            if(c[i]!=a[i]&&c[i]!=b[i]){
                flag=1;
                break;
            }
        }
        puts((flag==1)?"NO":"YES");
    }
    return 0;
}