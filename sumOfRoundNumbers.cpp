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
		vector<int> ans;
		int n; cin>>n;
		int d=1;
		while(n){
			if(n%10!=0){
				ans.push_back(d*(n%10));
			}
			n/=10;
			d*=10;
		}
		cout<<ans.size()<<endl;
		for(int c: ans)cout<<c<<" "; cout<<endl;
	}
	
	return 0;
}