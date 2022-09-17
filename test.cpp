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
		int i=0, j=n-1;
		while(s[i]!='1' and i<n)i++;
		while(s[j]!='1' and j>=0)j--;
		if(j==-1){
			cout<<n<<endl;
			continue;
		}
		int longestCycle=(j-i+1)*2;
		
		cout<<ans<<endl;
	}
	
	return 0;
}