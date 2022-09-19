#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

int32_t main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

	string s, e;
	cin>>s>>e;
	int sh=(s[0]-'0')*10+(s[1]-'0');
	int sm=(s[3]-'0')*10+(s[4]-'0');
	int eh=(e[0]-'0')*10+(e[1]-'0');
	int em=(e[3]-'0')*10+(e[4]-'0');

	int t1=sh*60+sm;
	int t2=eh*60+em;
	int t=t1+(t2-t1)/2;
	int h=t/60, m=t%60;
	if(h<10)cout<<0<<h<<":";
	else cout<<h<<":";
	if(m<10)cout<<0<<m;
	else cout<<m;	
	return 0;
}