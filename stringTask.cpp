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

	string s; cin>>s;
	int n=s.length();
	string ans="";

	for(int i=0;i<n;i++){
		s[i]=tolower(s[i]);
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')continue;
		ans+='.';
		ans+=s[i];
	}
	cout<<ans<<endl;
	return 0;
}