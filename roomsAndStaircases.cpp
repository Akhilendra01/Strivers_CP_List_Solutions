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

	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		string s; cin>>s;
		int cnt=n;
		for(int i=0;i<n;i++){
			if(s[i]=='1')cnt=max(cnt, max(2*(i+1), 2*(n-i)));
		}

		cout<<cnt<<endl;
	}
	
	return 0;
}