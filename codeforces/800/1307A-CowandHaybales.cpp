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
        int n,d;
        cin>>n>>d;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        while(d--){
            for(int i=1;i<n;i++){
                if(a[i]>0){
                    a[i]--;
                    a[i-1]++;
                    break;
                }
            }
        }
        cout<<a[0]<<endl;
    }
    return 0;
}