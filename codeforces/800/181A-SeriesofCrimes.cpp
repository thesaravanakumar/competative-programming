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
    int n,m,x=0,y=0,i,j;
	cin>>n>>m;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			char t;
			cin>>t;
			if(t=='*'){
				x=x^i;
				y=y^j;
			}
		}
	}
	x++;
	y++;
	cout<<x<<" "<<y<<endl;
    return 0;
}