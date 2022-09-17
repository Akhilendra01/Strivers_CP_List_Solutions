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
	string s1=s;
	int n=s.length();
	
	bool ok=true;
	for(int i=1;i<s.length();i++){
		if(!isupper(s[i])){ok=false; break;}
		else s[i]=tolower(s[i]);
	}
	if(ok){
		if(isupper(s[0]))s[0]=tolower(s[0]);
		else s[0]=toupper(s[0]);
		cout<<s<<endl;
	}
	else cout<<s1;	
	return 0;
}