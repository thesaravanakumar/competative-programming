#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int sum = 0;
    char last = 'a';
    for (char c : s)
    {
        sum += min(26 - abs(c - last), abs(c - last));
        last = c;
    }
    cout << sum;
    return 0;
}