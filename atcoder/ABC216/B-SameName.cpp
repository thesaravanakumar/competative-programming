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
    int temp=0;
    int n;
    cin>>n;
    string a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]&&b[i]==b[j]){
                temp=1;
                break;
            }
        }
    }
    if(temp)cout<<"Yes";
    else cout<<"No";
    return 0;
}