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
    string a,b,c;
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);
    int s=0,s1=0,s2=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='u'||a[i]=='o')s++;
    }
    for(int i=0;i<b.size();i++){
        if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='u'||b[i]=='o')s1++;
    }
    for(int i=0;i<c.size();i++){
        if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='u'||c[i]=='o')s2++;
    }
    if(s==5&&s2==5&&s1==7)cout<<"YES";
    else cout<<"NO";
    return 0;
}