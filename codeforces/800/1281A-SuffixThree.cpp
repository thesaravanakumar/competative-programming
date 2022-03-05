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
        string s;
        cin>>s;
        int l=s.size();
        if(s.back()=='o')
            cout << "FILIPINO"<<endl;
        else if(s.back()=='u')
            cout << "JAPANESE"<<endl;
        else
            cout << "KOREAN"<<endl;
    }
    return 0;
}