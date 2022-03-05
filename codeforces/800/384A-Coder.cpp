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
    int n;
    cin>>n;
    cout<<((n*n)/2)+(n%2)<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<((i+j)&1?".":"C");2
            
        }
        cout<<endl;
    }
    return 0;
}