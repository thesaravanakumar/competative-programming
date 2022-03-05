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
        string a;
        cin>>a;
        int sum=0,left=a.find('1'),right=a.rfind('1');
        for(int i=left;i<right;i++){
            if(a[i]=='0')sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}