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
		int l, r; cin>>l>>r;
		if(2*l>r)cout<<"-1 -1\n"<<endl;
		else cout<<l<<" "<<2*l<<endl;
	}
	
	return 0;
}