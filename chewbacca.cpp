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
	int i=0;
	if(s[i]=='9')i++;
	for(;i<s.length();i++){
		if(s[i]-'0'>=5){
			s[i]=(9-(s[i]-'0'))+'0';
		}
	}
	cout<<s<<endl;
	
	return 0;
}