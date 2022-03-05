/*●▬▬▬▬▬๑۩۩๑▬▬▬▬●●▬▬▬▬▬๑۩۩๑▬▬▬▬●🆀🆄🅰🅺🅴●▬▬▬▬▬๑۩۩๑▬▬▬▬●●▬▬▬▬▬๑۩۩๑▬▬▬▬●*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    int temp=0;
    for(int i=0,j=b.size()-1;i<a.size();i++,j--)
        if(a[i]!=b[j]){
            temp=1;
            break;
        }
    if(temp==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
/*●▬▬▬▬▬๑۩۩๑▬▬▬▬●●▬▬▬▬▬๑۩۩๑▬▬▬▬●🆀🆄🅰🅺🅴●▬▬▬▬▬๑۩۩๑▬▬▬▬●●▬▬▬▬▬๑۩۩๑▬▬▬▬●*/