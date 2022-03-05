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
        int n,k;
        cin>>n>>k;
        for(int i=0,j=1;i<n;i++,j++){
            if(j==4)j=1;
            switch(j){
                case 1:cout<<"a";break;
                case 2:cout<<"b";break;
                case 3:cout<<"c";break;
            }
        }
        cout<<endl;
    }
    return 0;
}