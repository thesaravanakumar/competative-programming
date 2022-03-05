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
    string a[10] = {
        "O-|-OOOO",
        "O-|O-OOO",
        "O-|OO-OO",
        "O-|OOO-O",
        "O-|OOOO-",
        "-O|-OOOO",
        "-O|O-OOO",
        "-O|OO-OO",
        "-O|OOO-O",
        "-O|OOOO-"};
    int n;
    cin>>n;
    do{
        cout<<a[n%10]<<endl;
        n/=10;
    }while(n>0);
    return 0;
}